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
    int n;
    cin >> n;

    vi s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        bool lq = (i > 0 && s[i] == s[i - 1]);
        bool rq = (i < n - 1 && s[i] == s[i + 1]);
        if (!lq && !rq)
        {
            cout << -1 << "\n";
            return;
        }
    }

    vi p(n);
    int i = 0;
    while (i < n)
    {
        int j = i;
        while (j < n && s[j] == s[i])
            j++;

        for (int k = i; k < j - 1; k++)
            p[k] = k + 1;
        p[j - 1] = i;
        i = j;
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] + 1 << " ";
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