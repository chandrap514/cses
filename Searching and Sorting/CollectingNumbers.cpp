#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    set<int> st;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        
        if(st.count(x-1)){
            st.erase(x-1);
        }
        st.insert(x);
    }
    cout<<st.size();
    
    return 0;
}