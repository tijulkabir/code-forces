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
        vector<int> num(n);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        int max = num[0];
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += num[i];
            if (max < num[i])
            {
                max = num[i];
            }
        }
        double res = max + ((sum - max) * 1.0 / (n - 1));
        cout << fixed << setprecision(9) << res << endl;
    }

    return 0;
}