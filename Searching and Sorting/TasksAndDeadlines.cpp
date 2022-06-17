#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(), arr.end());

    ll ans=0;
    ll cumm=0;
    for(int i=0; i<n; i++){
        cumm+=arr[i].first;
        ans+=arr[i].second-cumm;
    }

    cout<<ans;
    return 0;
}