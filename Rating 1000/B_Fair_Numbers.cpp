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

    while (1)
    {
        ll x = n;
        bool che = true;

        while (x)
        {
            int d = x % 10;
            if (d != 0 && n % d != 0)
            {
                che = false;
                break;
            }
            x /= 10;
        }

        if (che)
        {
            cout << n << "\n";
            return;
        }

        n++;
    }
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