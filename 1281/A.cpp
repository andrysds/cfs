#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    string s;
    while(t--) {
        cin >> s;
        switch (s.back())
        {
        case 'o':
            cout << "FILIPINO" << "\n";
            break;
        case 'u':
            cout << "JAPANESE" << "\n";
            break;
        case 'a':
            cout << "KOREAN" << "\n";
            break;
        }
    }

    return 0;
}
