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

template <typename T>
vector<T> readv(int n)
{
    vector<T> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    return v;
}

void solve()
{

    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll mn = k * b;
    ll mx = k * b + n * (k - 1);

    if (s < mn || s > mx)
    {
        cout << -1 << endl;
        return;
    }

    vll a(n, 0);
    a[0] = k * b;
    ll rem = s - a[0];

    for (int i = 0; i < n; ++i)
    {
        ll add = min(rem, k - 1);
        a[i] += add;
        rem -= add;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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