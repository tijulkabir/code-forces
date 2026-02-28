#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        int n = (int)s.size();
        vector<vector<int>> rev(n+1);         
        vector<int> outdeg(n+1, 0);          
       
        for (int i = 1; i <= n; ++i) {
            char c = s[i-1];
            if (c == '<') {
                if (i-1 >= 1) {
                    outdeg[i] = 1;
                    rev[i-1].push_back(i);
                } else outdeg[i] = 0; 
            } else if (c == '>') {
                if (i+1 <= n) {
                    outdeg[i] = 1;
                    rev[i+1].push_back(i);
                } else outdeg[i] = 0;
            } else { // '*'
                int cnt = 0;
                if (i-1 >= 1) { cnt++; rev[i-1].push_back(i); }
                if (i+1 <= n) { cnt++; rev[i+1].push_back(i); }
                outdeg[i] = cnt;
            }
        }

        
        queue<int> q;
        vector<ll> dp(n+1, 0);
        for (int i = 1; i <= n; ++i) {
            if (outdeg[i] == 0) {
                dp[i] = 1; 
                q.push(i);
            }
        }

        int processed = 0;
        while (!q.empty()) {
            int v = q.front(); q.pop();
            ++processed;
            for (int p : rev[v]) {
                
                dp[p] = max(dp[p], dp[v] + 1);
                --outdeg[p];
                if (outdeg[p] == 0) {
                   
                    if (dp[p] == 0) dp[p] = 1; 
                    q.push(p);
                }
            }
        }

        if (processed != n) {
            
            cout << -1 << '\n';
        } else {
            ll ans = 0;
            for (int i = 1; i <= n; ++i) ans = max(ans, dp[i]);
            cout << ans << '\n';
        }
    }
    return 0;
}
