#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        
        vector<int> a(n + 1);
        
        for (int i = 1; i <= n; i++) {
            long long diff = (i == 1) ? b[1] : b[i] - b[i - 1];
            
            int pos = i - diff;
            
            if (pos >= 1) {
                a[i] = a[pos];
            } else {
                a[i] = i;
            }
        }
        
        for (int i = 1; i <= n; i++) {
            cout << a[i];
            if (i < n) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}