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
        cin >>n;
        
          if (n == 1) {
            cout << 1 << endl;
        }
         else {
            for (int i = 0; i < n; i++) {
                cout << 7 + i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}