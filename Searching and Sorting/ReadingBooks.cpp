#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;

    ll sum=0, mxm=0;

    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x>mxm) mxm=x;
        sum+=x;
    }

    if(mxm>sum-mxm) cout<<mxm*2;
    else cout<<sum;

    return 0;

}