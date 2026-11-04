#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        int maxi = 1;
 
        for (int i = 0; i < n; i++) {
            int cnt = 1;
 
            for (int j = i + 1; j < n; j++) {
                if (a[j] % a[i] == 0) {
                    cnt++;
                }
            }
 
            maxi = max(maxi, cnt);
        }
 
        cout << n - maxi << '
';
    }
 
    return 0;
}