#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> store(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;
            store[ai]++;
        }
        int check = 0;
        for (int j = 0; j <= n; j++) {
            if (store[j] == 0 || check + store[j] < k) {
                cout << j << "\n";
                break;
            }
            check += store[j] - k;
        }
    }
    return 0;
}
