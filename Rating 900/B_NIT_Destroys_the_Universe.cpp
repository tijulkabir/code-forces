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
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int pts = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0 && (i == 0 || v[i - 1] == 0))
        {
            pts++;
        }
    }

    if (pts == 0)
        cout << 0 << endl;
    else if (pts == 1)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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