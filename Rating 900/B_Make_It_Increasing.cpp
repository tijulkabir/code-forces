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
    vll v(n);
    for (auto &x : v)
        cin >> x;

    ll res = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1] && v[i] > 0)
        {
            v[i] /= 2;
            res++;
        }
        if (v[i] == v[i + 1])
        {
            cout << -1 << endl;
            return;
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