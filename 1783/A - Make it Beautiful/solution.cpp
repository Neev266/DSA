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
	    if(arr[0]==arr[n-1]){
	        cout<<"No"<<endl;
	    }else{
	        cout<<"Yes"<<endl;
	        for(int i=0;i<(n)/2;i++){
	            cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
	        }
	        if(n%2!=0){
	            cout<<arr[(n)/2];
	        }
	        cout<<endl;
	    }
	}
 
}