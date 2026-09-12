#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) cnt++;
        }
 
        int y;
        if (n == 1) {
            y = 1;
        } else if (cnt == 2) {
            y = 2;
        } else {
            y = 1;
        }
 
        cout << y << "
";
    }
 
    return 0;
}