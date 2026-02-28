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
    ll n, x;
    cin >> n >> x;
    vi v(n);
    ll e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            e++;
        else
            o++;
    }
    for (ll k = 1; k <= min(o, x); k += 2)
    {
        if (x - k <= e)
        {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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