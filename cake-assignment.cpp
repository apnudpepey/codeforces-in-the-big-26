#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, x;
    if (!(cin >> k >> x)) return;

    long long initial_cakes = (long long)pow(2, k);
    long long vanl = (long long)pow(2, k + 1) - x; 
    long long choc = x;

    vector<int> path;

    while (choc != initial_cakes) {
        if (choc > vanl) {
            choc -= vanl;
            vanl *= 2;
            path.push_back(2);
        } else {
            vanl -= choc;
            choc *= 2;
            path.push_back(1);
        }
    }

    reverse(path.begin(), path.end());
    cout << path.size() << "\n";
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << (i == path.size() - 1 ? "" : " ");
    }
    cout << "\n";
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