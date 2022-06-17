#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m;
	cin>>n>>m;
	
	multiset<int> tickets;
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    tickets.insert(x);
	}
	
	for(int i=0; i<m; i++){
	    int p;
	    cin>>p;
	    if(tickets.empty()){
	        cout<<-1<<endl;
	        continue;
	    }
	    auto itr = tickets.lower_bound(p);
	    if(itr==tickets.begin()){
	        if(*itr!=p){
	            cout<<-1<<endl;
	        }
	        else{
	            cout<<*itr<<endl;
	            tickets.erase(itr);
	        }
	    }
	    else{
	        
	        if(itr==tickets.end() || *itr!=p) itr--;
	        cout<<*itr<<endl;
	        tickets.erase(itr);
	    }
	    
	}
	
	return 0;
}