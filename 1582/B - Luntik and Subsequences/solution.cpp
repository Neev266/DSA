#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long cnt_zero=0,cnt_one=0;
        for(long long i=0;i<n;i++){
            if(arr[i]==0){
                cnt_zero++;
            }else if(arr[i]==1){
                cnt_one++;
            }
        }
        long long ans=pow(2,cnt_zero)*cnt_one;
        cout<<ans<<endl;
    }
}