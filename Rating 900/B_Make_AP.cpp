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
    ll a, b, c;
    cin >> a >> b >> c;

    bool ok = false;

    ll x = 2 * b - c;
    if (x > 0 && x % a == 0)
        ok = true;

    ll s = a + c;
    if (s % 2 == 0)
    {
        ll y = s / 2;
        if (y % b == 0)
            ok = true;
    }

    ll z = 2 * b - a;
    if (z > 0 && z % c == 0)
        ok = true;

    cout << (ok ? "YES\n" : "NO\n");
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