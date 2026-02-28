#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'

long long last(long long base, long long n, long long mod) {
    long long res = 1;
    base %= mod;
    while(n) {
        if(n % 2 == 0) {
            base = (base * base) % mod;
            n /= 2;
        } else {
            res = (res * base) % mod;
            n--;
        }
    }
    return res;
}

int main() {
    fastio();
    
    long long n;
    cin >> n;

    if(n == 0) {
        cout << 1 << endl;
    } else {
        cout << last(1378, n, 10) << endl;
    }

    return 0;
}
