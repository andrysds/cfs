#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, q, y;
    cin >> n >> m;

    string s[n], t[m];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }

    cin >> q;
    while(q--) {
        cin >> y;
        y--;
        cout << s[y%n] << t[y%m] << "\n";
    }


    return 0;
}
