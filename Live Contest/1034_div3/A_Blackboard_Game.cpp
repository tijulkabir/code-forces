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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int c0 = 0, c1 = 0, c2 = 0, c3 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 4 == 0)
                c0++;
            if (i % 4 == 1)
                c1++;
            if (i % 4 == 2)
                c2++;
            if (i % 4 == 3)
                c3++;
        }

        int pair = min(c0, c3) + min(c1, c2);

        if (pair * 2 == n)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }

    return 0;
}