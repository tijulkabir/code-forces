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
    cin >>t;
    while(t--){

    int k;
    cin >> k;
    int count = 0;
    int i = 1;

    while (1) {
        if (i % 3 != 0 && i % 10 != 3) {
            count++;
            if (count == k) {
                cout << i << endl;  
                break;
            }
        }
        i++;
    }
}

    return 0;
}
