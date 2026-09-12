#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long sum=0;
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        if(arr[i]>i+1){
	            sum+=(arr[i]-(i+1));
	        }else{
	            sum-=((i+1)-arr[i]);
	        }
	        if(sum<0){
	            flag=true;
	            break;
	        }
	    }
	    if(!flag){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
 
}