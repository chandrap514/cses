#include<bits/stdc++.h>
using namespace std;
 
bool comp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
 
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    
    sort(arr.begin(), arr.end(), comp);
    
    int last=INT_MIN;
    int ans=0;
    
    for(int i=0; i<n; i++){
        if(arr[i].first>=last){
            ans++;
            last=arr[i].second;
        }
    }
    cout<<ans;
    return 0;
}