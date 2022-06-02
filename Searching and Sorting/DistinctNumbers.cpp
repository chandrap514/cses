#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    
    set<int> distinctElements;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        distinctElements.insert(x);
    }
    cout<<distinctElements.size();
}
 
int main() {
    solve();
    return 0;
}