#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,c;
	    cin>>n>>c;
	    vector<ll>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr[i]+=i+1;
	    }
	    sort(arr.begin(),arr.end());
	    ll sum=0;
	    ll idx=0;
	    ll cnt=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        if(sum<=c){
	            cnt++;
	        }
	        
	    } 
	    cout<<cnt<<endl;
	}
 
}