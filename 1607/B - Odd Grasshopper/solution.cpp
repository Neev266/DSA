#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long final_pos;
        if(b%4==0){
            final_pos=0;
        }else if(b%4==1){
            final_pos=-b;
        }else if(b%4==2){
            final_pos=1;
        }else{
            final_pos=b+1;
        }
 
        if(a%2==0){
            final_pos=a+final_pos;
        }else{
            final_pos=a-final_pos;
        }
        cout<<final_pos<<endl;
    }
}