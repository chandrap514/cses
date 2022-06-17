#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    
    sort(a, a+n);
    
    int med=a[n/2];
    
    long long ans=0;
    for(auto it:a){
        ans+=1LL*abs(it-med);
    }
    cout<<ans;
    return 0;
}