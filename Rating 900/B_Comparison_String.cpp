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
    string s;
    cin >> s;
    ll res = 1, bor = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            bor = 1;
            
        else
            bor++;
        res = max(res, bor);
    }
    cout << res + 1 << endl;
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