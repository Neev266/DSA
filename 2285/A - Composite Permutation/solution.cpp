#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3){
            cout<<-1<<endl;
        }
        else if(n%2==0){
            for(int i=n;i>1;i--){
                cout<<i<<" ";
            }
            cout<<1<<endl;
        }else{
            cout<<n-1<<" "<<n<<" ";
            for(int i=3;i<=n-2;i++){
                cout<<i<<" ";
            }
            cout<<1<<" "<<2<<endl;
        }
    }
}