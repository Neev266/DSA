#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a==b || a==c || b==c){
	        cout<<0<<endl;
	    }else{
	        int temp=min(abs(a-b),abs(b-c));
	        cout<<min(temp,abs(a-c))<<endl;
	    }
	}
 
}