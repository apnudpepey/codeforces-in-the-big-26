#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int one1 = 0, one2 = 0;
    for (int i=0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i]=='1') one1++;
            if (b[i]=='1') one2++;
        } else {
            if (a[i]=='1') one2++;
            if (b[i]=='1') one1++;
        }
    }
    int spot1 = n/2;
    int spot2 = (n+1)/2;

    if (one1 <= spot1 && one2 <= spot2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}