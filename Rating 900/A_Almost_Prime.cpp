#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    int counts[3005] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (counts[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                counts[j]++;
            }
        }
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (counts[i] == 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}