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
    ll n, x, y, z = 0, i;
    cin >> x >> n;
    y = n % 4;
    if (y == 1)
        z = -n;
    else if (y == 2)
        z = 1;
    else if (y == 3)
        z = n + 1;
    if (x & 1)
        cout << x - z << endl;
    else
        cout << x + z << endl;
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