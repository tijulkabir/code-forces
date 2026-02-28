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
    ll n, m;
    cin >> n >> m;
    ll l = (n + 1) / 2;
    ll res = ((l + m - 1) / m) * m;

    if (res > n)
        res = -1;
    cout << res << endl;
}

int main()
{
    fastio();
    solve();
    return 0;
}