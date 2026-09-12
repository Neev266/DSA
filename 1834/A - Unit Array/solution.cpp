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
	    int neg=0,pos=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>0){
	            pos++;
	        }else{
	            neg++;
	        }
	    }
	    int cnt=0;
	    while(pos<neg || neg%2!=0){
	        cnt++;
	        pos++;
	        neg--;
	    }
	    cout<<cnt<<endl;
	}
 
}