#include <bits/stdc++.h>
using namespace std;

static inline void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define eb emplace_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void solve(){
    int n;
    ll p;
    cin >> n >> p;
    vll a(n), b(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) cin >> b[i];

    vector<pair<ll, ll>> v(n);
    for(int i=0; i<n; ++i) v[i] = {b[i], a[i]};
    sort(all(v));

    ll ans = p;
    ll rem = n - 1;

    for(int i=0; i<n; ++i){
        if(rem <= 0) break;
        if(v[i].first >= p) break;
        ll take = min(rem, v[i].second);
        ans += take * v[i].first;
        rem -= take;
    }
    ans += rem * p;
    cout << ans << endl;
}

int main(){
    fastio();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}