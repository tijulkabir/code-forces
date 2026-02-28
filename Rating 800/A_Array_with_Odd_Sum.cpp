#include <bits/stdc++.h>
using namespace std;

static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using vi = vector<ll>;

#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void solve()
{
    int n;
    cin >> n;

    int odcnt = 0, evcnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2)
            odcnt++;
        else
            evcnt++;
    }

    if (odcnt % 2 == 1 || (odcnt > 0 && evcnt > 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}