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
        int min_dig = 9;
        while (n > 0)
        {
            int dig = n % 10;
            if (dig < min_dig)
            {
                min_dig = dig;
            }
            n /= 10;
        }

        cout << min_dig << endl;
    }
    return 0;
}