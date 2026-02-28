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
void _print(const pair<T, V> &x) {
    cerr << '{';
    _print(x.first);
    cerr << ", ";
    _print(x.second);
    cerr << '}';
}

template <typename T>
void _print(const T &x) {
    cerr << '[';
    for (auto &i : x) {
        _print(i);
        cerr << " ";
    }
    cerr << ']';
}

// ---------- String Helpers ----------
string lower(string s) {
    for (char &c : s) c = tolower(c);
    return s;
}

string upper(string s) {
    for (char &c : s) c = toupper(c);
    return s;
}

// ---------- Shortcuts ----------
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<long long> vll;

// ---------- Constants ----------
const int MOD = 1e9+7;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;

// ---------- Main ----------
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        // Check if already palindrome
        bool pal = true;
        for (int i = 0; i < n / 2; ++i)
        {
            if (s[i] != s[n - 1 - i])
            {
                pal = false;
                break;
            }
        }

        if (pal)
        {
            cout << "0\n\n";
            continue;
        }

        // Try all possible subsequences, prefer smaller ones
        vector<int> best;
        int bestSize = n + 1;
        
        for (int mask = 0; mask < (1 << n); ++mask)
        {
            vector<int> removed;
            string remaining = "";
            string subseq = "";
            
            for (int i = 0; i < n; ++i)
            {
                if (mask & (1 << i))
                {
                    removed.push_back(i + 1);
                    subseq += s[i];
                }
                else
                {
                    remaining += s[i];
                }
            }
            
            // Check if subseq is non-decreasing
            bool nonDec = true;
            for (int i = 1; i < (int)subseq.size(); ++i)
            {
                if (subseq[i] < subseq[i - 1])
                {
                    nonDec = false;
                    break;
                }
            }
            
            if (!nonDec) continue;
            
            // Check if remaining is palindrome
            bool isPal = true;
            int len = remaining.size();
            for (int i = 0; i < len / 2; ++i)
            {
                if (remaining[i] != remaining[len - 1 - i])
                {
                    isPal = false;
                    break;
                }
            }
            
            if (isPal && (int)removed.size() < bestSize)
            {
                best = removed;
                bestSize = removed.size();
            }
        }

        cout << best.size() << '\n';
        for (size_t i = 0; i < best.size(); ++i)
        {
            if (i) cout << ' ';
            cout << best[i];
        }
        cout << '\n';
    }

    return 0;
}