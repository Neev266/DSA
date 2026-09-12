#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    long long arr[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    long long cnt=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	             if(arr[i][j]!=arr[n-i-1][n-j-1]){
	                 cnt++;
	             }
	        
	        }    
	    }
	    cnt/=2;
	    if(cnt>k){
	        cout<<"No"<<endl;
	    }else{
	        long long temp=k-cnt;
	        if(temp%2==0){
	            cout<<"Yes"<<endl;
	        }else{
	            if(n%2==0){
	                cout<<"No"<<endl;
	            }else{
	                cout<<"Yes"<<endl;
	            }
	        }
	    }
	           
	}
 
}