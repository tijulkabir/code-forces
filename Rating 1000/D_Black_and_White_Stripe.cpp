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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
            cnt++;
    }
    ll res = cnt;
    for (int i = k; i < n; i++)
    {
        if (s[i] == 'W')
            cnt++;
        if (s[i - k] == 'W')
            cnt--;
        res = min(res, cnt);
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