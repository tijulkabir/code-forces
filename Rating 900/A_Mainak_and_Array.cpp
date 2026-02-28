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
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll res = a[n - 1] - a[0];

    for (int i = 0; i < n; i++)
        res = max(res, a[i] - a[0]);

    for (int i = 0; i < n; i++)
        res = max(res, a[n - 1] - a[i]);

    for (int i = 1; i < n; i++)
        res = max(res, a[i - 1] - a[i]);
        
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