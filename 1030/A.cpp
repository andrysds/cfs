#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, o, max = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> o;
        if (o > max) {
            max = o;
        }
    }

    cout << (max == 1 ? "HARD" : "EASY") << endl;

    return 0;
}
