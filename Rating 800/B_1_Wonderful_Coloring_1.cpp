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
        string color;
        cin >> color;
        int freq[26] = {0};
        for (char c : color)
        {
            freq[c - 'a']++;
        }
        int first = 0, sec = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] >= 2)
            {
                sec++;
            }
            else if (freq[i] == 1)
            {
                first++;
            }
        }
        int count = sec + (first / 2);
        cout << count << endl;
    }
    return 0;
}
