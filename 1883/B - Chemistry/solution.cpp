#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n-k==1){
            cout<<"Yes"<<endl;
            continue;
        }
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
        }
        int cnt=0;
        int odd=0;
        for(int i=0;i<26;i++){
            if(hash[i]%2!=0){
                odd++;
            }
        }
        if(odd>k+1){
            cout<<"No"<<endl;
            
        }else{
            cout<<"Yes"<<endl;
        }
    }
}