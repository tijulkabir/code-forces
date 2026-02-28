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
    ll min_x = (n / 6), max_y = 0;

    if (n % 2 == 1 || n < 4)
        cout << -1 << endl;

    else
    {
        min_x = n / 6;
        if (n % 6 != 0)
            min_x++;

        max_y = n / 4;

        cout << min_x << " " << max_y << endl;
    }
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