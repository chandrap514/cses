#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0 ;i<n; i++) cin>>arr[i];
    
    map<int,int> vis;
    int ans=0, curr=0;
    int st=0;
    for(int i=0; i<n; i++){
        if(vis.count(arr[i])){
            ans=max(ans,curr);
            while(arr[st]!=arr[i]){
                vis.erase(arr[st]);
                st++;
                curr--;
            }
            st++;
        }
        else{
            curr++;
            vis[arr[i]]++;
        }
    }
    ans=max(ans,curr);
    cout<<ans;
}