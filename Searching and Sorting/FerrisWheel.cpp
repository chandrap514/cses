#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,x;
	cin>>n>>x;
	
	int per[n];
	for(int i=0; i<n; i++) cin>>per[i];
	
	sort(per, per+n);
	
	int id1=0, id2=n-1;
	int ans=0;
	
	while(id1<=id2){
	    ans++;
	    if(id2>id1 && per[id1]+per[id2]<=x) id1++;
	    id2--;
	}
	
	cout<<ans;
	
	return 0;
}