#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, k;
    cin>>n>>m>>k;
    
    int per[n], app[m];
    
    for(int i=0; i<n; i++) cin>>per[i];
    for(int i=0; i<m; i++) cin>>app[i];
    sort(per, per+n);
    sort(app, app+m);
    
    int id1=0, id2=0;
    
    int ans=0;
    
    while(id1<n && id2<m){
        if(app[id2]>=per[id1]-k && app[id2]<=per[id1]+k){
            ans++;
            id1++;
            id2++;
        }
        else if(app[id2]<per[id1]-k) id2++;
        else id1++;
    }
    
    cout<<ans;
    
    return 0;
}