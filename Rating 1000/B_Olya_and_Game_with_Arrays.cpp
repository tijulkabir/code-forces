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
    ll s = 0, m1 = 2e18, m2 = 2e18;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vll a(k);
        for (int j = 0; j < k; j++)
            cin >> a[j];
        sort(all(a));
        ll x = a[0], y = a[1];
        s += y;
        m1 = min(m1, x);
        m2 = min(m2, y);
    }
    cout << s - m2 + min(m1, m2) << '\n';
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