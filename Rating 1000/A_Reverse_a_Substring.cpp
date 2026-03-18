#include <bits/stdc++.h>
using namespace std;

static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using i32 = int;
using ull = unsigned long long;

using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())

template <class F>
ll bs(ll l, ll r, F f)
{
    while (l < r)
    {
        ll m = l + (r - l) / 2;
        if (f(m))
            r = m;
        else
            l = m + 1;
    }
    return l;
}

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    int i = -1;
    for (int k = 0; k < n - 1; k++)
    {
        if (s[k] > s[k + 1])
        {
            i = k;
            break;
        }
    }

    if (i == -1)
    {
        cout << "NO\n";
        return;
    }

    int j = i + 1;
    for (int k = i + 1; k < n; k++)
    {
        if (s[k] < s[i])
        {
            j = k;
        }
    }

    cout << "YES\n";
    cout << i + 1 << " " << j + 1 << "\n";
}

int main()
{
    fastio();
    solve();
    return 0;
}