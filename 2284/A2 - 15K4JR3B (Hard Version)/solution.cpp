#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ttl=0;
        for(ll i=0;i<n;i++){
            ttl+=(1LL<<arr[i]);
        }
        sort(arr.rbegin(),arr.rend());
        long long x=0;
        for(ll i=0;i<n;i++) {
            if(x+(1LL<<arr[i])<=ttl/2){
                x+=(1LL<<arr[i]);
            }
        }
        long long y=ttl-x;
        cout<<x*y<<endl;
    }
}