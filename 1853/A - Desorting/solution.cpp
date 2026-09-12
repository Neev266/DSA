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
	    int d=INT_MAX;
	    bool flag=false;
	    for(int i=0;i<n-1;i++){
	        d=min(d,arr[i+1]-arr[i]);
	        if(arr[i]>arr[i+1]){
	            flag=true;
	            continue;
	        }
	    }
	    if(flag){
	        cout<<0<<endl;
	    }else{
	        cout<<(d/2)+1<<endl;
	    }
	    
	}
 
}