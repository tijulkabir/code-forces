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
   ll n;
   cin >> n;
   vll v(n);
   for (int i = 0; i < n; i++) cin >> v[i];
	for (int i = 1; i < n - 1; ++i) {
		if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
			cout << "YES" << endl;
			cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}