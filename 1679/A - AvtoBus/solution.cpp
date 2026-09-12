#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if(n<4 || n%2==1){
	        cout<<-1<<endl;
	    }else{
	        ll min_bus=(n+5)/6;
	        ll max_bus=n/4;
	        cout<<min_bus<<" "<<max_bus<<endl;
	    }
	    
	}
 
}