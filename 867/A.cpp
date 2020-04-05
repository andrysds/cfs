#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0, f = 0;
    string a;
    cin >> n >> a;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i-1]) {
            if (a[i] == 'S') {
                s++;
            } else {
                f++;
            }
        }
    }

    cout << (f > s ? "YES" : "NO") << endl;

    return 0;
}
