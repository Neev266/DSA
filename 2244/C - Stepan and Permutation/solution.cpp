#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    bool flag=false;
	    int g = gcd(x, y);
 
        for (int i = 0; i < n; i++) {
            if ((arr[i] % g) != ((i + 1) % g)) {
                flag = true;
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