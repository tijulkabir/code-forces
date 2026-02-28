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
    string r;
    cin >> r;
    ll n = r.size();

    int cntu = 0;
    for (char c : r)
        if (c == 'u')
            cntu++;

    int stk = 0;
    int cur = 0;

    for (int i = 1; i <= n - 2; i++)
    {
        if (r[i] == 'u')
        {
            cur++;
        }
        else
        {
            stk += (cur + 1) / 2;
            cur = 0;
        }
    }
    stk += (cur + 1) / 2;

    cout << cntu - stk << endl;
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