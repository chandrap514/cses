#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,x;
    cin>>n>>x;
    
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++) cin>>a[i].first, a[i].second=i+1;
    sort(a.begin(), a.end());
    
    int id1=0, id2=n-1;
    int res1=-1, res2=-1;
    while(id1<id2){
        int sum=a[id1].first+a[id2].first;
        if(sum==x){
            res1=a[id1].second;
            res2=a[id2].second;
            break;
        }
        else if(sum>x) id2--;
        else id1++;
    }
    if(res1==-1) cout<<"IMPOSSIBLE";
    else cout<<res1<<" "<<res2;
    return 0;
}