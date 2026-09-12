#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<ll>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int maxi=*max_element(arr.begin(), arr.end());
	    int mini=*min_element(arr.begin(), arr.end());
	    ll ans=arr[n-1]-arr[0];
	    for(int i=0;i<n;i++){
	        ans=max(ans,arr[i]-arr[0]);
	    }
	    for(int i=0;i<n;i++){
	        ans=max(ans,arr[n-1]-arr[i]);
	    }
	    for(int i=0;i<n-1;i++){
	        ans=max(ans,arr[i]-arr[i+1]);
	    }
	    
	    cout<<ans<<endl;
	    
	}
 
}