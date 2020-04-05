#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, one = 0, zero = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'n') {
            one++;
        } else if (s[i] == 'z') {
            zero++;
        }
    }

    for (int i = 0; i < one; i++) {
        cout << "1 ";
    }
    for (int i = 0; i < zero; i++) {
        cout << "0 ";
    }
    cout << endl;

    return 0;
}
