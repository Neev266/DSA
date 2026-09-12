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
	    int cnt=0;
	    int cnt0=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            cnt0++;
	        }
	    }
	    bool flag=false;
	    ll left=0;
	    ll right=n-1;
	    while(arr[left]==0){
	        left++;
	    }
	    while(arr[right]==0){
	        right--;
	    }
	    
	    for(int i=left;i<right;i++){
	        if(arr[i]==0){
	            flag=true;
	        }
	    }
	    
	    if(cnt0==n){
	        cout<<0<<endl;
	    }else if(flag){
	        cout<<2<<endl;
	    }else{
	        cout<<1<<endl;
	    }
	    
	}
 
}