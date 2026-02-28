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

// ---------- Debug Print Helpers ----------
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

// ---------- String Helpers ----------
string lower(string s)
{
    for (char &c : s)
        c = tolower(c);
    return s;
}

string upper(string s)
{
    for (char &c : s)
        c = toupper(c);
    return s;
}

// ---------- Shortcuts ----------
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

// ---------- Constants ----------
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;

// ---------- Input Macro ----------
#define fin(n, a)               \
    vll a(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

// ---------- Solve Function ----------
void solve()
{
    int n, k;
    cin >> n >> k;
    fin(n, a);

    vll fq(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        fq[x]++;
    }

    int lag = 0;
    for (int v = 0; v < k; ++v)
        if (fq[v] == 0)
            lag++;

    int c = fq[k];

    int res = max(c, lag);
    cout << res << endl;
    res << endl;
}

// ---------- Main ----------
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}