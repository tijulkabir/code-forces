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
    ll a, b;
    cin >> a >> b;

    ll res = 0;

    for (int i = 0; i < 2; i++)
    {
        ll ta = a, tb = b;
        ll lage = 1;
        ll h = 0;

        while (1)
        {
            if (h % 2 == 0)
            {
                if (ta >= lage)
                    ta -= lage;
                else
                    break;
            }
            else
            {
                if (tb >= lage)
                    tb -= lage;
                else
                    break;
            }
            h++;
            lage *= 2;
        }
        res = max(res, h);
        swap(a, b);
    }

    cout << res <<endl;
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