#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()


#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
    long long n;

        cin>>n;
        long long bigt=1;
      while((bigt<<1)<=n){
        bigt<<=1;
      }
      cout <<bigt-1<<endl;

        
    }
    return 0;
}