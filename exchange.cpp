#include <iostream>

using namespace std;

void solve() {
    long long n, a, b;
    if (!(cin >> n >> a >> b)) return;

    if (a > b) {
        cout << 1 << endl;
    } else {
        cout << (n + a - 1) / a << endl;
    }
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