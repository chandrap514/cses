#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m;
    cin>>n>>m;
    
    int arr[n+2];
    int pos[n+2];
    arr[0]=pos[0]=0;
    arr[n+1]=pos[n+1]=n+1;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        pos[arr[i]]=i;
    }
    
    int currans = 1;
    for(int i=2; i<=n; i++){
        if(pos[i]<pos[i-1]) currans++;
    }
    
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        if(pos[arr[x]-1]>pos[arr[x]]) currans--;
        if(pos[arr[x]]>pos[arr[x]+1]) currans--;
        if(arr[y]-1 != arr[x] && pos[arr[y]-1]>pos[arr[y]]) currans--;
        if(arr[y]+1 != arr[x] && pos[arr[y]]>pos[arr[y]+1]) currans--;
        
        swap(pos[arr[x]],  pos[arr[y]]);
        swap(arr[x],arr[y]);
        
        if(pos[arr[x]-1]>pos[arr[x]]) currans++;
        if(pos[arr[x]]>pos[arr[x]+1]) currans++;
        if(arr[y]-1 != arr[x] && pos[arr[y]-1]>pos[arr[y]]) currans++;
        if(arr[y]+1 != arr[x] && pos[arr[y]]>pos[arr[y]+1]) currans++;
        cout<<currans<<endl;
    }
}