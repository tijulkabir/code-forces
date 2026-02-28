#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<long long> bags(n);
        for (int i = 0; i < n; i++) {
            cin >> bags[i];
        }
        
        int coins = 0;
        
        // Simulate the process
        while (!bags.empty()) {
            // Find the bag to destroy
            // Strategy: If any bag <= c, destroy the largest one among those
            // Otherwise, destroy the smallest bag > c
            
            int toDestroy = 0;
            bool foundFree = false;
            
            // First, check if there's any bag we can destroy for free
            for (int i = 0; i < bags.size(); i++) {
                if (bags[i] <= c) {
                    foundFree = true;
                    if (bags[i] > bags[toDestroy] || bags[toDestroy] > c) {
                        toDestroy = i;
                    }
                }
            }
            
            // If no free bag, find the smallest bag that costs money
            if (!foundFree) {
                for (int i = 0; i < bags.size(); i++) {
                    if (bags[i] < bags[toDestroy] || toDestroy == -1) {
                        toDestroy = i;
                    }
                }
            }
            
            // Destroy the chosen bag
            if (bags[toDestroy] > c) {
                coins++;
            }
            
            // Remove the destroyed bag
            bags.erase(bags.begin() + toDestroy);
            
            // Double all remaining bags
            for (int i = 0; i < bags.size(); i++) {
                bags[i] *= 2;
            }
        }
        
        cout << coins << endl;
    }

    return 0;
}