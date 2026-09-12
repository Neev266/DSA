#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    long long sum=0;
	    bool flag=true;
	    if(arr[0]!=1){
	        flag=false;
	   }
	    for(int i=0;i<n-1;i++){
	       sum+=arr[i];
	       if(sum<arr[i+1]){
	          flag=false;
	          break;
	       }
	    }
	    if(!flag){
	        cout<<"No"<<endl;
	    }else{
	        cout<<"Yes"<<endl;
	    }
	}
 
}