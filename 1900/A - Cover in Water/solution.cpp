#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i-1>=0 && s[i]==s[i-1] && i+1<n && s[i]==s[i+1]){
                cnt=2;
                break;
            }
            if(s[i]=='.'){
                    cnt++;
                }
        }
        cout<<cnt<<endl;
    }
 
}