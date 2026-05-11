#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i < n; i++) cin >> a[i];

    int count = 0;
    int first_index = -1;

    for (int i=0; i < n; i++) {
        if (a[i] == a[0]) count++;
        if (count == k && first_index == -1) first_index = i;
    }

    if (a[0] == a[n-1]) {
        if (count >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }

    if (first_index == -1) {
        cout << "NO\n";
        return;
    }

    int count_end = 0;
    for (int i=first_index+1; i < n; i++) if (a[i] == a[n-1]) count_end++;

    if (count_end >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
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