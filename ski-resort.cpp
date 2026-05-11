#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i=0; i < n; i++) cin >> a[i];

    long long total_ways = 0, current_length = 0;
    for (int i=0; i < n; i++) {
        if (a[i] <= q) {
            current_length++;
        } else {
            if (current_length >= k) {
                total_ways += (current_length - k + 1)*(current_length - k + 2)/2;
            }
            current_length = 0;
        }
    }
    if (current_length >= k) {
        total_ways += (current_length - k + 1)*(current_length - k + 2)/2;
    }
    cout << total_ways << "\n";
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