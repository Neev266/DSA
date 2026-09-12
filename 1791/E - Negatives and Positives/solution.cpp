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
	    ll sum=0;
	    for(int i=0;i<n;i++){
	        sum+=abs(arr[i]);
	        if(arr[i]<0){
	            cnt++;
	        }
	        arr[i]=abs(arr[i]);
	    }
	    if(cnt%2==0){
	        cout<<sum<<endl;
	    }else{
	        int mini=*min_element(arr.begin(), arr.end());
	        sum-=2*mini;
	        cout<<sum<<endl;
	    }
	}
 
}