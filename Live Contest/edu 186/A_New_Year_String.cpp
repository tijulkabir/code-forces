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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt5 = 0, cnt6 = 0;

    for (int i = 0; i + 3 < n; i++)
    {
        if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '5')
            cnt5 = 1;
        if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '6')
            cnt6 = 1;
    }

    if (cnt5 == 1 && cnt6 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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