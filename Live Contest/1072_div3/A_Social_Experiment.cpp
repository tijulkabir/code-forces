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
    cin>>n;
    if(n==2)cout<<2<<endl;
    else if(n==3)cout<<3<<endl;
    else if (n%2==0)cout<<0<<endl;
    else cout<<1<<endl;
}

int main(){
    fastio();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}