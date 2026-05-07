#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++) {
        for (int k = 1; k < n; k++) {
            if (s[k-1] == 'B' && s[k] == 'G') {
                swap(s[k-1], s[k]);
                k++;
            }
        }
    }
    cout << s << endl;
    return 0;
}