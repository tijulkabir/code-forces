#include <bits/stdc++.h>
using namespace std;

static inline void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define eb emplace_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const ll INF = (ll)4e18;

void solve() {
    int a, b;
    cin >> a >> b;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int sx[4] = {-1, 1, -1, 1};
    int sy[4] = {-1, -1, 1, 1};

    set<pll> s1, s2;

    for (int i = 0; i < 4; i++) {
        s1.insert({x1 + sx[i]*a, y1 + sy[i]*b});
        s1.insert({x1 + sx[i]*b, y1 + sy[i]*a});

        s2.insert({x2 + sx[i]*a, y2 + sy[i]*b});
        s2.insert({x2 + sx[i]*b, y2 + sy[i]*a});
    }

    int res = 0;
    for (auto &p : s1) {
        if (s2.count(p)) res++;
    }

    cout << res << endl;;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}