#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    int cnt=0;
	    int maxCnt=0;
	    for(int i=1;i<n;i++){
	        if(arr[i]-arr[i-1]<=k){
	            cnt++;
	        }else{
	            maxCnt=max(maxCnt,cnt);
	            cnt=0;
	        }
	    }
	    maxCnt=max(maxCnt,cnt);
	    cout<<n-maxCnt-1<<endl;
	}
 
}