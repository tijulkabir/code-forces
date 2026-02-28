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
    int n;
    cin >> n;

    vi a = readv<int>(n);
    vi b = readv<int>(n);

    vi ma(2 * n + 1, 0);
    vi mb(2 * n + 1, 0);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i - 1])
            count = 1;
        else
            count++;

        ma[a[i]] = max(ma[a[i]], count);
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || b[i] != b[i - 1])
            count = 1;
        else
            count++;

        mb[b[i]] = max(mb[b[i]], count);
    }

    int ml = 0;
    for (int i = 1; i <= 2 * n; ++i)
    {
        ml = max(ml, ma[i] + mb[i]);
    }

    cout << ml << endl;
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