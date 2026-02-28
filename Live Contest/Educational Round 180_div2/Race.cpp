#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;

        bool canWin = false;
        for (int b = 1; b <= 100; ++b) {
            if (b == a) continue;

            if (abs(b - x) < abs(a - x) && abs(b - y) < abs(a - y)) {
                canWin = true;
                break;
            }
        }

        cout << (canWin ? "YES" : "NO") << endl;
    }
    return 0;
}
