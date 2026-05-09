#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    long long sum = 0;
    vector<int> reductions;

    for (int i = 0; i < x.length(); i++) {
        int digit = x[i] - '0'; //convert char to int
        sum += digit;
        if (i == 0) {
            reductions.push_back(max(0, digit - 1));
        } else {
            reductions.push_back(digit);
        }
    }
    if (sum <= 9) {
        cout << 0 << endl;
        return;
    }

    sort(reductions.rbegin(), reductions.rend());
    
    long long needed = sum - 9;
    int moves = 0;
    long long reduced = 0;

    for (int r: reductions) {
        reduced += r;
        moves++;
        if (reduced >= needed) {
            break;
        }
    }
    cout << moves << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}