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
    vll v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
        
   ll tt=0;
    for(int i=0;i<n-1;i++){
        tt+=abs(v[i]-v[i+1]);
    }

    ll hck=0;
    hck=max(hck,abs(v[0]-v[1]));
    hck=max(hck,abs(v[n-1]-v[n-2]));

    for(int i=1;i<n-1;i++){
        ll bor=abs(v[i]-v[i-1])+abs(v[i]-v[i+1]);
        ll ot=abs(v[i+1]-v[i-1]);
        hck=max(hck,bor-ot);
    }
    cout<<tt - hck<<endl;
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