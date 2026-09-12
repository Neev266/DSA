#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        string s;
        cin>>s;
 
        int groups = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                groups++;
        }
 
        int ans = groups;
 
        for (int i = 1; i <= n - 2; i++) {
 
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
 
                if (s[i - 1] == s[i + 1])
                    ans = min(ans, groups - 2);
 
                else
                    ans = min(ans, groups - 1);
            }
        }
 
        cout << ans << "
";
	}
 
}