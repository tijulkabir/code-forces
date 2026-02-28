#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c2 = n / 3; 
        int c1 = n - 2 * c2; 
        if (abs(c1 - c2) > 1) {
            c2 += 1;
            c1 = n - 2 * c2; 
        }
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}