#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mn = INT_MAX, mx = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);}
        if (mn == mx) {
            cout << mx << '\n';
            continue; }
        int b = 31 - __builtin_clz(mx);
        if ((31 - __builtin_clz(mn)) < b) {
            cout << ((1LL << (b + 1)) - 1) << '\n';
        } else {
            int k = 31 - __builtin_clz(mx ^ mn);
            cout << (mx | ((1LL << (k + 1)) - 1)) << '\n'; }
    } 
    return 0;
}