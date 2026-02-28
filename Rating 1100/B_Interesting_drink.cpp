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

const int MOD = 1e9 + 7;
const ll INF = (ll)4e18;

void solve(){
    ll n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    auto countLE = [&](ll m) -> ll {
        ll l = 0, r = (ll)a.size();   
        while (l < r) {
            ll mid = l + (r - l) / 2;
            if ((ll)a[mid] <= m) l = mid + 1;
            else r = mid;
        }
        return l; 
    };

    ll q;
    cin >> q;
    while(q--){
        ll m;
        cin >> m;
        cout << countLE(m) << endl;
    }
}

int main(){
    fastio();
    int t = 1;
    while(t--) solve();
    return 0;
}
