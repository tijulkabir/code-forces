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
    char okh;
    int t, n, c = 0;
    cin >> t >> n;
    for (int i = 1; i <= (t * n); i++)
    {
        cin >> okh;
        if (okh == 'B' || okh == 'W' || okh == 'G')
        {
            c++;
        }
    }
    if (c == (t * n))
    {
        cout << "#Black&White\n";
    }
    else
    {
        cout << "#Color\n";
    }
}

int main()
{
    fastio();
    solve();
    return 0;
}