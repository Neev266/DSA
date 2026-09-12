#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,n,m;
    
    cin>>t;
    while(t--){
        cin>>n>>m;
        int length=0,a=0;
        string word;
        for(int i=0;i<n;i++){
            cin>>word;
            int x=word.size();
            length+=x;
            if(length<=m){
                
                a++;
            }
            
        }
        cout<<a<<endl;
    }
 
}