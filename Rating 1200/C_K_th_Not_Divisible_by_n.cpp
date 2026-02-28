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
    ll n, k;
    cin >> n >> k;
    ll lw = 1;
    ll hg = n * k;
    ll res = -1;

    while (lw <= hg)
    {
        ll mid = lw + (hg - lw) / 2;
        ll cnt = mid - mid / n;
        if (cnt < k)
            lw = mid + 1;
        else
        {
            res = mid;
            hg = mid - 1;
        }
    }

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