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
    cin >> n >> x;

    ll res = 0, mnres = 0, mxres = 0;
    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        res += c;

        mxres += (c + x - 1) / x;
    }

    mnres = (res + x - 1) / x;

    cout << mnres << " " << mxres << endl;
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