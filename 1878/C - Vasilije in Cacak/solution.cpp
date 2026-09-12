#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long sum=(n*(n+1))/2;
        long long sum1=(k*(k+1))/2;
        long long sum2=((n-k)*(n-k+1))/2;
        if(sum1<=x && (sum-sum2)>=x){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}