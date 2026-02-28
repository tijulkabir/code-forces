#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(long x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(unsigned x) { cerr << x; }
void _print(unsigned long x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(long double x) { cerr << x; }
void _print(char x) { cerr << '\'' << x << '\''; }
void _print(const string &x) { cerr << '"' << x << '"'; }
void _print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V>
void _print(const pair<T, V> &x)
{
    cerr << '{';
    _print(x.first);
    cerr << ", ";
    _print(x.second);
    cerr << '}';
}
template <typename T>
void _print(const T &x)
{
    cerr << '[';
    for (auto &i : x)
    {
        _print(i);
        cerr << " ";
    }
    cerr << ']';
}

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<long long> vll;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;

int main()
{
    fastio();
    string danger;
    cin >> danger;
    int count = 1, mat = 1;
    for (int i = 1; i < danger.size(); i++)
    {
        if (danger[i] == danger[i - 1])
            count++;
        else
            count = 1;
        mat = max(mat, count);
    }
    if (mat >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}