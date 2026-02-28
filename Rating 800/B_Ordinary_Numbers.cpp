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
        cin >>n;
        int count =0;
        for (int i = 1; i <=9 ; i++)
        {
           long long num=i;
           while(num<=n){
            count++;
            num=num*10+i;
           }

        }
        cout<<count<<endl;

    }

    return 0;
}