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
        string s;
        cin >> s;
        set<char> see;
        char last = ' ';

        bool cought = false;

        for (char c : s)
        {
            if (c != last)
            {
                if (see.count(c))
                {
                    cought = true;
                    break;
                }
                see.insert(c);
                last = c;
            }
        }

        cout << (cought ? "NO" : "YES") << endl;
    }
    return 0;
}