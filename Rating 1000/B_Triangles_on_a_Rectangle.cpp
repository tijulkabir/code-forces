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
    ll w, h;
    cin >> w >> h;
    ll area = 0;
    for (int i = 0; i < 4; i++)
    {
        ll k;
        cin >> k;
        ll ff, ss;
        for (int j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            if (j == 0)
                ff = x;
            if (j == k - 1)
                ss = x;
        }
        ll b = ss - ff;
        ll hei;
        if (i <= 1)
            hei = h;
        else
            hei = w;
        area = max(area, b * hei);
    }
    cout << area << "\n";
}
// another way to solve
// void solve()
// {
//     ll w, h;
//     cin >> w >> h;
    
//     ll area = 0;
    
//     for (int i = 0; i < 4; ++i)
//     {
//         ll k;
//         cin >> k;
        
//         vll pts(k);
//         for (int j = 0; j < k; ++j)
//         {
//             cin >> pts[j];
//         }
        
//         ll b = pts.back() - pts.front();
//         ll hei = (i <= 1) ? h : w;
        
//         area = max(area, b * hei);
//     }
    
//     cout << area << "\n";
// }

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}