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
    int n, q;
    cin >> n >> q;

    vll a(n + 1), pfs(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pfs[i] = pfs[i - 1] + a[i];
    }

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll bad = pfs[r] - pfs[l - 1];
        ll len = (r - l + 1);

        ll ns = pfs[n] - bad + k * len;

        if (ns % 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
