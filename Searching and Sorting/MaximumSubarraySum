#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    
    long long ans=INT_MIN;
    long long curr=0;
    
    for(int i=0; i<n; i++){
        curr+=1LL*a[i];
        ans=max(ans, curr);
        if(curr<0) curr=0;
    }
    cout<<ans;
    return 0;
}