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
    int n;
    ll l;
    cin >> n >> l;

    vll v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(all(v));

    double d = 0.0;

    d = max(d, (double)v[0]);

    for (int i = 1; i < n; i++) {
        d = max(d, (v[i] - v[i - 1]) / 2.0);
    }

    d = max(d, (double)(l - v[n - 1]));

    cout << fixed << setprecision(10) << d << endl;
}

int main(){
    fastio();
    solve();
    return 0;
}