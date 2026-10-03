#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int cnt_zero=0,cnt_one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt_zero++;
            }else{
                cnt_one++;
            }
        }
        int ans=min(cnt_one,cnt_zero);
        if(ans%2==0){
            cout<<"NET"<<endl;
        }else{
            cout<<"DA"<<endl;
        }
    }
}