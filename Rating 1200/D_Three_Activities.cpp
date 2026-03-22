#include <bits/stdc++.h>
using namespace std;

static inline void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

using ll = long long;
using i32 = int;
using ull = unsigned long long;

using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())

template <class F>
ll bs(ll l, ll r, F f)
{
    while (l < r)
    {
        ll m = l + (r - l) / 2;
        if (f(m))
            r = m;
        else
            l = m + 1;
    }
    return l;
}

void solve()
{
    ll n;
    cin >> n;

    vll va(n), vb(n), vc(n);
    for (int i = 0; i < n; i++)
        cin >> va[i];
    for (int i = 0; i < n; i++)
        cin >> vb[i];
    for (int i = 0; i < n; i++)
        cin >> vc[i];

    vi A(3, -1), B(3, -1), C(3, -1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[j] == -1 || va[i] > va[A[j]])
            {
                for (int k = 2; k > j; k--)
                    A[k] = A[k - 1];
                A[j] = i;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (B[j] == -1 || vb[i] > vb[B[j]])
            {
                for (int k = 2; k > j; k--)
                    B[k] = B[k - 1];
                B[j] = i;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (C[j] == -1 || vc[i] > vc[C[j]])
            {
                for (int k = 2; k > j; k--)
                    C[k] = C[k - 1];
                C[j] = i;
                break;
            }
        }
    }

    ll res = 0;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                int i = A[x];
                int j = B[y];
                int k = C[z];

                if (i != j && i != k && j != k)
                {
                    res = max(res, va[i] + vb[j] + vc[k]);
                }
            }
        }
    }

    cout << res << '\n';
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}