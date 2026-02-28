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
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minval = *min_element(a.begin(), a.end());

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > minval)
                count++;
        }

        cout << count << endl;
    }
return 0;
    }

    
