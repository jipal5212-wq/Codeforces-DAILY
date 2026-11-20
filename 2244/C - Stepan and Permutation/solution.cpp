#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
 
        int g = gcd(x, y);
 
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
 
            if (abs(val - (i + 1)) % g != 0)
                ok = false;
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
 
    return 0;
}