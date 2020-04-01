#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[4], y[3], sum = 0;

    for (int i = 0; i < 4; i++) {
        cin >> x[i];
        if (x[i] > sum) sum = x[i];
    }

    for (int i = 0, j = 0; i < 4; i++) {
        if (sum == x[i]) continue;
        y[j] = sum - x[i];
        j++;
    }

    printf("%d %d %d\n", y[0], y[1], y[2]);

    return 0;
}
