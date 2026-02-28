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
    ll n;
    cin >> n;
    vector<pii> pass(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pass[i].first >> pass[i].second;
    }
    sort(all(pass));
    ll cd = 0;
    for (int i = 0; i < n; i++)
    {
        if (pass[i].second >= cd)
        {
            cd = pass[i].second;
        }
        else
            cd = pass[i].first;
    }
    cout << cd << endl;
}

int main()
{
    fastio();
    solve();
    return 0;
}