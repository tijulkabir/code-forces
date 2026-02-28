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
    map<string,int>freq;

    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        freq[s]++;
    }
    string mfs;
    int mf=0;
    for(auto &[s,c]:freq){
        if(c>mf){
            mf=c;
            mfs=s;
        }
    }
    cout << mfs << "\n";
}
int main(){
    fastio();
    solve();
    return 0;
}