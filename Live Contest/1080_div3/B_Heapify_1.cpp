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
    ll n;
    cin >> n;
    vi v(n + 1);
    bool st = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        ll man = v[i];
        while (man % 2 == 0)
            man /= 2;
        ll idx = i;
        while (idx % 2 == 0)
            idx /= 2;
        if (idx != man)
        {
            st = false;
            break;
        }
    }
    if (st)
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