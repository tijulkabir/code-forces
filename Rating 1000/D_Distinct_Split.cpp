#include <bits/stdc++.h>
using namespace std;

static inline void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using i32 = int;
using ull = unsigned long long;

using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())



void solve(){
    ll n;
    string s;
    cin >> n >> s;
    
    vi lct(26, 0);
    vi rct(26, 0);
    
    int r = 0;
    int lun = 0;
    int res = 0;
    
    for(int i = 0; i < n; i++) {
        int val = s[i] - 'a';
        if(rct[val] == 0) {
            r++; 
        }
        rct[val]++;
    }
    
    for(int pos = 0; pos < n - 1; pos++) {
        int val = s[pos] - 'a';
        
        if(lct[val] == 0) {
            lun++;
        }
        lct[val]++;
        
        rct[val]--;
        if(rct[val] == 0) {
            r--;
        }
        
        res = max(res, lun + r);
    }
    
    cout << res << endl;
}

int main(){
    fastio();
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}