#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i=0; i < s.length(); i++) {
        if (i+1 < s.length() && s[i] == s[i+1]) {
            cout << s.substr(i,2) << endl;
            return;
        } 
        if (i+2 < s.length() && s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]) {
            cout << s.substr(i,3) << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}