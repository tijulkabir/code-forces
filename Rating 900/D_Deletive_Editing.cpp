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
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const ll INF = (ll)4e18;

void solve()
{
    string s, t;
    cin >> s >> t;
    map<char, int> tfq;
    for (char c : t)
    {
        tfq[c]++;
    }
    string res = "";
    int tlen = t.length() - 1;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        char ch = s[i];

        if (tfq[ch] > 0)
        {

            if (tlen >= 0 && ch == t[tlen])
            {
                res += ch;
                tfq[ch]--;
                tlen--;
            }
            else
            {

                cout << "NO" << endl;
                return;
            }
        }
    }
    reverse(all(res));
    if (res == t)
        cout << "YES\n";
    else
        cout << "NO\n";
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