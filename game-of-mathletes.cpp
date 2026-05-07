#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++;
    }

    int score = 0;
    for (auto const& [val, count] : counts) {
        int partner = k - val;

        if (counts.count(partner)) {
            if (val < partner) {
                score += min(count, counts[partner]);
            } else if (val == partner) {
                score += count / 2;
            }        
        }
    }
    cout << score << endl;
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