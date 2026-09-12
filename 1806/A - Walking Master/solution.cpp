#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,c,d;
	    cin>>x>>y>>c>>d;
	    int moves=0;
	    if(x>c){
	        moves+=(x-c);
	        x=c;
	    }else{
	        moves+=(c-x);
	        y+=(c-x);
	        x+=(c-x);
	    }
	    
	    if(d<y){
	        cout<<-1<<endl;
	    }else{
	        moves+=((d-y)*2);
	        cout<<moves<<endl;
	    }
	}
 
}