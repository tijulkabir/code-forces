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
    ll a, b;
    cin >> a >> b;

    if ((a > b && a % b) || (b > a && b % a))
    {
        cout << -1 << '\n';
        return;
    }

    ll x = max(a, b) / min(a, b);
    ll k = 0;

    while (x % 2 == 0)
    {
        x /= 2;
        k++;
    }

    if (x != 1)
        cout << -1 << '\n';
    else
        cout << (k + 2) / 3 << '\n';
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