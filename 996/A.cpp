#include <bits/stdc++.h>

using namespace std;

int main() {
    int b[4] = { 100, 20, 10, 5 };
    int n, res = 0;
    cin >> n;

    for (int i = 0; i < 4; i++) {
        res += n/b[i];
        n %= b[i];
    }
    res += n;

    cout << res << endl;

    return 0;
}
