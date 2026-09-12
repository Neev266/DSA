#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c,x=0,y=0,z=0;
        cin>>m>>a>>b>>c;
        if(a<=m ){
            x=a;
        
        }
        else{
            x=m;
        }
        if(b<=m){
            y=b;
        }
        else{
            y=m;
        }
        m=2*m-(x+y);
        if(m>0 && c<=m){
            z=c;
        }
        else if(m>0 && c>m){
            z=m;
        }
        else{
            z=0;
        }
        cout<<x+y+z<<endl;
 
    }
}