#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i += 2) {
        for(int k = 0; k < s.length(); k += 2) {
            if (s[i] < s[k]) {
                swap(s[i], s[k]);
            }
        }
    }
    cout << s << endl;
    return 0;
}