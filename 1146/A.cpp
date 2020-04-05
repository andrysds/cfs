#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int a = 0, n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            a++;
        }
    }

    cout << (a > n/2 ? n : a*2-1) << endl;

    return 0;
}
