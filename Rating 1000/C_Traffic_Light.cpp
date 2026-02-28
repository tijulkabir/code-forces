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
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }
    s += s;
    ll ng = -1;
    ll res = 0;
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
            ng = i;
        if (i < n && s[i] == c)
        {
            res = max(res, ng - i);
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