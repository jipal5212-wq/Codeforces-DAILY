#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    int x = k - n + 1;
    if (x < 1 || x > n) {
        cout << -1 << '
';
        return;
    } 
    vector<vector<int>> a(n, vector<int>(n));
    int val = 1;
    a[0][0] = val++;
    for (int i = 1; i < x; i++) {
        a[0][i] = val++;
        a[i][0] = val++;
    }
    for (int i = x; i < n; i++) {
        a[i][i] = val++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                a[i][j] = val++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '
';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
    return 0;
}