
#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> F;
    F["Tetrahedron"] = 4;
    F["Cube"] = 6;
    F["Octahedron"] = 8;
    F["Dodecahedron"] = 12;
    F["Icosahedron"] = 20;

    int n, f = 0;
    string s;
    cin >> n;

    while (n--) {
        cin >> s;
        f += F[s];
    }

    cout << f << endl;

    return 0;
}
