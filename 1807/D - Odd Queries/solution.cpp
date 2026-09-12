#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    vector<ll>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long old_sum=0;
	    for(int i=0;i<n;i++){
	        old_sum+=arr[i];
	    }
	    vector<ll>prefix_sum(n+1,0);
	    for(int i=1;i<=n;i++){
	        prefix_sum[i]=prefix_sum[i-1]+arr[i-1];
	    }
	    for(int i=0;i<q;i++){
	        int l,r,k;
	        cin>>l>>r>>k;
	        
	        ll remove_sum = prefix_sum[r] - prefix_sum[l-1];
	        
	        ll add_sum = (r-l+1) * k;
	        
	        ll new_sum= old_sum - remove_sum + add_sum;
	        
	        if(new_sum%2!=0){
	            cout<<"Yes"<<endl;
	        }else{
	            cout<<"No"<<endl;
	        }
	        
	    }
	}
 
}