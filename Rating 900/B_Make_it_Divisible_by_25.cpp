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
    string s;
    cin >> s;

    int res = 100;
    string lage[4] = {"00", "25", "50", "75"};

    for (int k = 0; k < 4; k++)
    {
        int cnt = 0;
        int i = s.size() - 1;

        while (i >= 0 && s[i] != lage[k][1])
        {
            i--;
            cnt++;
        }
        if (i < 0)
            continue;

        i--;

        while (i >= 0 && s[i] != lage[k][0])
        {
            i--;
            cnt++;
        }
        if (i < 0)
            continue;

        res = min(res, cnt);
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