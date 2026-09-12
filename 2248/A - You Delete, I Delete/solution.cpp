#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length();
	    int cnt0=0;
	    int cnt1=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0' && cnt0==0){
	            s.erase(i,1);
                cnt0++;
                i--;
	        }
	        if(s[i]=='1' && cnt1==0){
	            cnt1++;
	            s.erase(i,1);
 
                i--;
	        }
	    }
	    cout<<s<<endl;
	}
 
}