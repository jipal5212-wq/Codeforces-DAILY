#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int even = 2, odd = 1;
        for (int i = 1; i <= n; i++) {
            if (i % 2)
                cout << even << " ", even += 2;
            else
                cout << odd << " ", odd += 2;
        }
        cout << '
';
    }
    return 0;
}