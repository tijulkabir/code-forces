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
    ll n, x;
    cin >> n;
    ll cnt0 = 0, cnt1 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
            cnt0++;
        if (x == 1)
            cnt1++;
    }

    ll res = cnt1 * (1ll << cnt0);
    cout << res << endl;
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