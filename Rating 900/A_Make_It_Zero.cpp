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
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    
    if(n & 1){
        cout << 4 << '\n';
        cout << 1 << " " << n - 1 << '\n';
        cout << 1 << " " << n - 1 << '\n';
        cout << n - 1 << " " << n << '\n';
        cout << n - 1 << " " << n << '\n';
    } else {
        cout << 2 << '\n';
        cout << 1 << " " << n << '\n';
        cout << 1 << " " << n << '\n';
    }
}



int main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}