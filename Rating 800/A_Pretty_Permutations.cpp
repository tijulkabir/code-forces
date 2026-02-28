#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n&1){
            cout <<"3 1 2 ";
            for (int i = 4; i <=n; i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
        }
        else{
            for (int i = 1; i <=n; i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
        }
        cout <<endl;
    }
    return 0;
}