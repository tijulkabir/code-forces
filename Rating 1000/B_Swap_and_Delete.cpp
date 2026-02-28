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
    int cn0 = 0;
    int cn1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            cn0++;
        else
            cn1++;
    }
    int lt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && cn1 > 0)
        {
            cn1--;
            lt++;
        }
        else if (s[i] == '1' && cn0 > 0)
        {
            cn0--;
            lt++;
        }
        else
            break;
    }
    cout << s.size() - lt << endl;
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