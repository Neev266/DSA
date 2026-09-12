#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long k, m;
        cin >> n >> k >> m;
 
        if (k > m) {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        for (int i = 1; i <= n; i++) {
            if (i < k)
                cout << 1;
            else if (i == k)
                cout << (m - k + 1);
            else
                cout << 1;
 
            if (i != n) cout << " ";
        }
        cout << "
";
    }
 
    return 0;
}