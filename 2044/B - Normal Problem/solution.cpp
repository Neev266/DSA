#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string a;
    int x;
    cin>>a;
    x=a.size();
    for(int i=0;i<x;i++){
        if(a[i]=='p'){
            a[i]='q';
        }
        else if(a[i]=='q'){
            a[i]='p';
        }
        else{
            a[i]='w';
        }
    }
     reverse(a.begin(),a.end());
    cout<<a<<endl;
    
    }
}