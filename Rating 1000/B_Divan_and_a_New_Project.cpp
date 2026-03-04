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
using pv = vector<pair<long, long>>;

#define ff first
#define ss second
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
    pv buld(n);
    for (int i = 0; i < n; i++)
    {
        cin >> buld[i].ff;
        buld[i].ss = i;
    }
    sort(buld.rbegin(), buld.rend());

    vll res(n);
    ll tl = 0;
    for (int i = 0; i < n; i++)
    {
        ll visit = buld[i].ff;
        ll oidx = buld[i].ss;
        ll dist = i / 2 + 1;
        if (i % 2 != 0)
            dist = -dist;
        res[oidx] = dist;
        tl += 2 * abs(dist) * visit;
    }
    cout << tl << "\n";
    cout << 0 << " ";
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    cout << "\n";
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