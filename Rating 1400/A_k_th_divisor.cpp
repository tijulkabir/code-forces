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
    ll n, k;
    cin >> n >> k;
    vll rakho;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            rakho.push_back(i);
            if (i != n / i)
                rakho.push_back(n / i);
        }
    }
    sort(all(rakho));
    if (k <= rakho.size())
        cout << rakho[k - 1] << endl;
    else
        cout << -1 << endl;
}

int main()
{
    fastio();
    solve();
    return 0;
}