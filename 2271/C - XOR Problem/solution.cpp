#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
 
        int S=1;
        while (S<=n) S<<=1;
 
        int k=2*S-1;
        cout<<k<<'
';
        for (int i=1; i<=k; i++) {
            int x=(i-1)%S, y=i%S;
            x^=x>>1;
            y^=y>>1;
            cout<<(x^y)<<(i==k?'
':' ');
        }
    }
}