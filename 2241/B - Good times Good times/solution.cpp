#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long x;
        cin >> x;
        long long n=0;
        while(x>0){
            n++;
            x=x/10;
        }
        long long p = 1;
    for (int i = 0; i < n; i++){
        p *= 10;
    }
    cout << p + 1 << '
';
        
    }
}