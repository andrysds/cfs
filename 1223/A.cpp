#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> q;
        if (q < 3) {
            cout << 2 << "\n";
        } else {
            cout << q % 2 << "\n";
        }
    }

    return 0;
}
