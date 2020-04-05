#include <bits/stdc++.h>

using namespace std;

int main() {
    string t, h, res = "NO";

    cin >> t;
    for (int i = 0; i < 5; i++) {
        cin >> h;
        if (res == "NO" && (h[1] == t[1] || h[0] == t[0])) {
            res = "YES";
        }
    }
    cout << res << endl;

    return 0;
}
