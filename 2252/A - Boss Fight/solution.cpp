#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        long long sum=0;
        vector<int>freq(1001,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
            sum+=x;
            freq[x]++;
        }
        int maxFreq=INT_MIN;
        int cnt=0;
        int value=0;
        for(int i=1;i<=1000;i++){
            if(maxFreq<freq[i]){
                maxFreq=freq[i];
                value=i;
            }
        }
        if(maxFreq<=(n+1)/2){
            cout<<sum<<endl;
        }else{
            cout<<sum-(maxFreq-(n-maxFreq+2))*value<<endl;
        }
    }
}