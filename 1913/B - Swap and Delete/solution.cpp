#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int t=0;
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
            }else{
                cnt0++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(s[i]=='0' && cnt1>0){
                cnt1--;
                t++;
            }else if(s[i]=='1' && cnt0>0){
                cnt0--;
                t++;
            }else{
                break;
            }
        }
        cout<<n-t<<endl;
    }
}