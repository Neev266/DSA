#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long cnt0=0;
        for(long long i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
            }
        }
        long long cnt1=n-cnt0;
        long long m=min(cnt0,cnt1);
        m=max(0LL,m-k);
        long long ans=1+(m*(m+1))/2+((n-m)*(n-m+1))/2;
        cout<<ans<<endl;
    }
    
}