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
    ll n, x;
    cin >> n >> x;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = a[0] - x;
    ll r = a[0] + x;

    ll lap = 0;
    for (int i = 1; i < n; i++)
    {
        ll nl = a[i] - x;
        ll nr = a[i] + x;
        if (nl <= r && nr >= l)
        {
            l = max(l, nl);
            r = min(r, nr);
        }
        else
        {
            lap++;
            l = nl;
            r = nr;
        }
    }
    cout << lap << endl;
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