#include <bits/stdc++.h>
using namespace std;

static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using vi = vector<ll>;

#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi v(n);
    vector<pair<ll, ll>> mo;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        ll rem = v[i] % k;
        if (rem == 0)
        {
            rem = k;
        }

        mo.pb({-rem, i + 1});
    }

    sort(all(mo));

    for (int i = 0; i < n; i++)
    {
        cout << mo[i].second << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}