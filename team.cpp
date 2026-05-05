#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int total = 0;
    for (int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}