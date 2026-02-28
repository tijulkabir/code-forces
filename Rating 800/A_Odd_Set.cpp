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
        int odd = 0;
        for (int i = 0; i < n * 2; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
                odd++;
        }

        if (odd == n)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}