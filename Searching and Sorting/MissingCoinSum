#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    
    sort(a, a+n);
    
    long long ans=1;
    
    for(int x:a){
        if(x>ans) break;
        ans+=1ll*x;
    }
    cout<<ans;
    
    return 0;
}