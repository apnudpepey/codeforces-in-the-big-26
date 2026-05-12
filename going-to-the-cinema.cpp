#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int valid_ways = 0;

    if (a[0] > 0) {
        valid_ways++;
    }

    for (int i = 0; i < n - 1; i++) {
        int k = i + 1;
        if (a[i] < k && a[i + 1] > k) {
            valid_ways++;
        }
    }

    valid_ways++;

    cout << valid_ways << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}