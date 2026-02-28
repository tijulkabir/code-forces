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
    cin >> n;
    ll a = -1, b = -1, c = -1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a = i;
            n /= i;
            break;
        }
    }
    if (a == -1)
    {
        cout << "NO\n";
        return;
    }
    for (ll i = a+1; i * i <= n; i++)
    {
        if (n % i == 0 && i != a)
        {
            b = i;
            n /= i;
            break;
        }
    }
    c = n;
    if (b != -1 && c != b )
    {
        cout << "YES\n";
        cout << a << " " << b << " " << c << endl;
    }
    else
        cout << "NO\n";
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