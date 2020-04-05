#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 1;

    cin >> n;
    for (int i = 2; i < n/2+1; i++) {
        if (n % i == 0) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
