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
using pli = pair<ll, int>;
using vpli = vector<pli>;

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
    vpli a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(all(a));

    vll pt(n);
    pt[0] = a[0].first;
    for (int i = 1; i < n; i++)
        pt[i] = pt[i - 1] + a[i].first;

    vi pou(n);
    pou[n - 1] = n - 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (pt[i] >= a[i + 1].first)
            pou[i] = pou[i + 1];
        else
            pou[i] = i;
    }

    vi res(n);
    for (int i = 0; i < n; i++)
        res[a[i].second] = pou[i];

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
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