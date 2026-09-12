#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int MaxDis=arr[0];
        if(n==1){
            MaxDis=arr[0];
        }else{
            for(int i=1;i<n;i++){
                int diff=arr[i]-arr[i-1];
                MaxDis=max(MaxDis,diff);
            }
            
        }
        
        if(2*(x-arr[n-1])>MaxDis){
            cout<<2*(x-arr[n-1])<<endl;
        }else{
            cout<<MaxDis<<endl;
            
        }
        
        
    }
}