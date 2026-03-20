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
    ll a, b, s, n;

    cin >> a >> b;
    n = a - 1;

    int r = n % 4;
    if (r == 0)
        s = n;
    else if (r == 1)
        s = 1;
    else if (r == 2)
        s = n + 1;
    else
        s = 0;

    if (s == b)
        cout << a << "\n";
    else if ((s ^ b) == a)
        cout << a + 2 << "\n";
    else
        cout << a + 1 << "\n";
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