#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> arr(n);
        long long cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                cnt++;
            }
        }
        long long mini=INT_MAX;
        for(int i=0;i<n;i++){
            long long temp;
            if(arr[i]%k==0){
                temp=0;
            }else{
                temp=k-(arr[i]%k);
            }
            mini=min(mini,temp);
        }
        if(k==4){
            if(cnt>=2){
                mini=min(mini,0ll);
            }else if(cnt==1){
                mini=min(mini,1ll);
            }else if(cnt==0){
                mini=min(mini,2ll);
            }
        }
        cout<<mini<<endl;
    }
}