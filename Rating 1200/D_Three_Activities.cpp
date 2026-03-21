#include <bits/stdc++.h>
using namespace std;

static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using i32 = int;
using ull = unsigned long long;

using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())

template <class F>
ll bs(ll l, ll r, F f)
{
    while (l < r)
    {
        ll m = l + (r - l) / 2;
        if (f(m))
            r = m;
        else
            l = m + 1;
    }
    return l;
}

void solve()
{
    ll n;
    cin >> n;
    vll va(n);
    vll vb(n);
    vll vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> va[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vb[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
// got TLE in CF
    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                    continue;

                res = max(res, va[i] + vb[j] + vc[k]);
            }
        }
    }

    cout << res << '\n';
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}