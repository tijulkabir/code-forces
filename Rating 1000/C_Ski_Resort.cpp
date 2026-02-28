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
    ll n, k, q;
    cin >> n >> k >> q;
    vi v(n);
    ll res = 0;
    ll le = 0;
    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        
        if (tmp <= q) 
        {
            le++;
            if (le >= k) 
            {
                res += (le - k + 1);
            }
        } 
        else 
        {
            le = 0;
        }
    }
    cout << res << endl;
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