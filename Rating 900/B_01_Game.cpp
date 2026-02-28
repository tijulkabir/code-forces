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
    ll cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            cnt1++;
        else
            cnt0++;
    }
    ll mv = min(cnt1, cnt0);
    if (mv % 2 != 0)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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