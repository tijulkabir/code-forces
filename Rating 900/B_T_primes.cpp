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
 
const int MAX = 1000005;
vector<bool> is_prime(MAX, true);
 
void prec()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}
 
void solve()
{
    ll x;
    cin >> x;
    ll r = sqrt(x);
    if (r * r == x && r < MAX && is_prime[r])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
 
int main()
{
    fastio();
    prec();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}