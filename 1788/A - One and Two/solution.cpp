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
	    int cnt1=0,cnt2=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==1){
	            cnt1++;
	        }else{
	            cnt2++;
	        }
	    }
	    
	    if(cnt2%2!=0){
	        cout<<-1<<endl;
	    }else if(cnt2==0){
	        cout<<1<<endl;
	    }
	    else{
	        int cnt=0;
	        int idx;
	        for(int i=0;i<n;i++){
	            if(arr[i]==2){
	                cnt++;
	            }
	            if(cnt==cnt2/2){
	                idx=i;
	                break;
	            }
	        }
	        cout<<idx+1<<endl;
	    }
	}
 
}