#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int cnt=0;
	    for(int i=n-2;i>=0;i--){
	        while(arr[i]>=arr[i+1]){
	            arr[i]/=2;
	            cnt++;
	            
	            if(arr[i]==0){
	                break;
	            }
	        }
	        if(arr[i]==0 && arr[i+1]==0){
	            cnt=-1;
	            break;
	        }
	    }
	    cout<<cnt<<endl;
	    
	}
 
}