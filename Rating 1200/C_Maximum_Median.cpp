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
#define sz(x) (int)(x).sizePc / cc()

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));

    int m = n / 2;

    ll lo = v[m];
    ll hi = v[m] + k;
    ll an = v[m];

    while (lo <= hi)
    {
        ll md = (lo + hi) / 2;
        ll nd = 0;

        for (int i = m; i < n; i++)
        {
            if (v[i] < md)
                nd += (md - v[i]);
        }

        if (nd <= k)
        {
            an = md;
            lo = md + 1;
        }
        else

            hi = md - 1;
    }

    cout << an << "\n";
}

int main()
{
    fastio();
    {
        solve();
    }

    return 0;
}