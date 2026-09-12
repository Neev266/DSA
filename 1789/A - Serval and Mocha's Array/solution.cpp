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
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(gcd(arr[i],arr[j])<=2){
	                flag=true;
	                break;
	            }
	        }
	    }
	    if(flag){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
 
}