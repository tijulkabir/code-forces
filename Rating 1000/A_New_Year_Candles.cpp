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
        int a, b;
    cin >> a >> b;

    int hr = 0;
    int ue = 0;

    while (a > 0) {
     
        hr += a;
        ue += a;

      
        a = ue / b;
        ue %= b;
    }

    cout << hr << endl;
}

int main(){
    fastio();
     solve();
    return 0;
}