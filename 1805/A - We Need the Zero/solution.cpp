#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ttl_xor=0;
        for(int i=0;i<n;i++){
            ttl_xor^=arr[i];
        }
        
        if(n%2==0){
            if(ttl_xor==0){
                cout<<ttl_xor<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<ttl_xor<<endl;
        }
    }
 
}