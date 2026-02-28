#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

int main() {
    fastio();

    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int s = 0, d = 0;
    int f = 0, l = t - 1;
    int turn = 0; 

    while (f <= l) {
        int chosen;
        if (arr[f] > arr[l]) {
            chosen = arr[f++];
        } else {
            chosen = arr[l--];
        }

        if (turn % 2 == 0) s += chosen;
        else d += chosen;

        turn++;
    }

    cout << s << " " << d << endl;
    return 0;
}
