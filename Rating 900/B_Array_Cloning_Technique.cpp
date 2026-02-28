#include <bits/stdc++.h>
using namespace std;

static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define eb emplace_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const ll INF = (ll)4e18;

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));

    int mx = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
            cur++;
        else
            cur = 1;
        mx = max(mx, cur);
    }

    ll ans = 0;
    ll cyc = mx;

    while (cyc < n)
    {
        ll add = min(cyc, n - cyc);
        ans += 1 + add;
        cyc += add;
    }

    cout << ans << endl;
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