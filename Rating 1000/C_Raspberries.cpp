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
    ll mio = k;
    ll ecnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            ecnt++;
        ll rem = v[i] % k;
        if (rem == 0)
            mio = 0;
        else
            mio = min(mio, k - rem);
    }
    if (k == 4)
    {
        ll ote = max(0LL, 2LL - ecnt);
        mio = min(mio, ote);
    }
    cout << mio << endl;
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