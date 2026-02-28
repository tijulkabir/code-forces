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

void solve() {
    ll n, k;
    cin >> k >> n;

    vll a(n * k + 1);
    for (ll i = 1; i <= n * k; i++) {
        cin >> a[i];
    }

    ll st = (k + 1) / 2;
    ll fal = k - (st - 1);

    ll pos = n * k + 1;
    ll res = 0;

    while (n--) {
        pos -= fal;
        res += a[pos];
    }

    cout << res << endl;
}


int main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}