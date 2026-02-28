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
    
    ll ans = 0;
    for(ll k = 1; k <= n; k++){
        if(n % k == 0){
            ans++;
        } else {
            break;
        }
    }
    
    cout << ans << endl;
}

int main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}