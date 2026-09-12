#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,c,d;
        cin>>x>>y>>c>>d;
        if(x==y && y==c && c==d){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
 
}