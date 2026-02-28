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
    int n, x;
    cin >> n >> x;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = max(a[0], 2 * (x - a[n - 1]));

    for (int i = 1; i < n; i++)
        ans = max(ans, a[i] - a[i - 1]);

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