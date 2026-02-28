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
#define rev(x) reverse(all(x))
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const ll INF = (ll)4e18;

void solve()
{
    ll n;
    cin >> n;
    vll v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll tt = n;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == tt)
        {
            tt--;
        }
        else
        {
            int r = i;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] == tt)
                {
                    r = j;
                    break;
                }
            }
            reverse(v.begin() + i, v.begin() + r + 1);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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