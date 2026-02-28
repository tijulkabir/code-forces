#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum == n) {
            cout << 0 << endl;
        } else if (sum < n) {
            cout << 1 << endl;
        } else {
            cout << sum - n << endl;
        }
    }

    return 0;
}
