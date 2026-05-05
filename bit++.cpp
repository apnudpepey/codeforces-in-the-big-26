#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int total = 0;
    for (int i = 0; i < k; i++) {
        string s;
        cin >> s;
        if (s.find('+') != string::npos) {
            total++;
        }
        else if (s.find('-') != string::npos) {
            total--;
        }
    }
    cout << total << endl;
    return 0;
}