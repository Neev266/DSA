#include <bits/stdc++.h>
using namespace std;
 
bool checkstr(string x,string s,int n,int m){
    if(n<m){
        return false;
    }
    
    for(int i=0;i<=n-m;i++){
        if(x.substr(i,m)==s){
            return true;
        }
    }
    return false;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    string x,s;
	    cin>>n>>m>>x>>s;
	    if(checkstr(x,s,n,m)){
	        cout<<0<<endl;
	        continue;
	    }
	    bool found=false;
	    int idx=-1;
	    for(int i=0;i<5;i++){
	        x+=x;
	        n+=n;
	        if(checkstr(x,s,n,m)){
	            found=true;
	            idx=i+1;
	            break;
	        }
	    }
	    if(found){
	        cout<<idx<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	    
	    
	}
 
}