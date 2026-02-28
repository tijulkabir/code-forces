#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int count = 0;
    int arr[] = {100, 20, 10, 5, 1};
    for(int i = 0; i < 5; ++i) {
        count += n / arr[i];
        n %= arr[i];
    }
    cout << count << endl;
}
