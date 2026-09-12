#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt=n;
	    for(int i=0;i<(n+1)/2;i++){
	        if(s[i]!=s[n-i-1]){
	            cnt-=2;
	        }else{
	            break;
	        }
	    }
	    cout<<cnt<<endl;
	}
 
}