#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    int a[n],d[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>d[i];
    }
    sort(a,a+n);
    sort(d,d+n);
    
    int id1=0, id2=0;
    int ans=0, curr=0;
    while(id1<n){
        if(a[id1]<d[id2]) curr++, id1++;
        else curr--, id2++;
        ans=max(ans,curr);
    }
    cout<<ans;
    
    return 0;
}