#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool valid(vector<int> mac, ll mid, ll t){
    int n=mac.size();
    ll pro=0;
    for(int i=0; i<n; i++){
        pro+=mid/mac[i];
        if(pro>=t) return true;
    }
    return false;
}

int main(){

    int n;
    ll t;
    cin>>n>>t;

    vector<int> mac(n);
    for(int i=0; i<n; i++) cin>>mac[i];

    ll low=0, hi=1e18, ans=0;

    while(low<=hi){
        ll mid=low+(hi-low)/2;
        if(valid(mac, mid, t)) ans=mid, hi=mid-1;
        else low=mid+1;
    }

    cout<<ans;
    return 0;
}