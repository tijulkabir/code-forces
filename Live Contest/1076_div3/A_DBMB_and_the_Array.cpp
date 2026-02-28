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
    ll n, s, x;
    cin >> n >> s >> x;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    if (sum <= s && (s - sum) % x == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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