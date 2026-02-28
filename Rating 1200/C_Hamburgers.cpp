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
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    ll fb = 0, fs = 0, fc = 0;
    for (char c : s)
    {
        if (c == 'B')
            fb++;
        else if (c == 'S')
            fs++;
        else if (c == 'C')
            fc++;
    }
    ll lw = 0;
    ll hg = 1e13;
    ll res = 0;
    while (lw <= hg)
    {
        ll mid = lw + (hg - lw) / 2;

        ll cb = max(0ll, (mid * fb - nb) * pb);
        ll cs = max(0ll, (mid * fs - ns) * ps);
        ll cc = max(0ll, (mid * fc - nc) * pc);

        ll total = cb + cs + cc;

        if (total <= r)
        {
            res = mid;
            lw = mid + 1;
        }
        else
        {
            hg = mid - 1;
        }
    }
    cout << res << endl;
}

int main()
{
    fastio();
    solve();
    return 0;
}