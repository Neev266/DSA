#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int temp = n;
        int digits = 0;
        while (temp) {
            digits++;
            temp /= 10;
        }
 
        int p = 1;
        for (int i = 1; i < digits; i++)
            p *= 10;
 
        int ans = (digits - 1) * 9 + n / p;
        cout << ans << '
';
    }
 
    return 0;
}