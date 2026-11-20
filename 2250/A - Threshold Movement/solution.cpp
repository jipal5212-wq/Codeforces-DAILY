#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        if (n % 2 == 1) {
            cout << "NO
";
            continue;
        }
        int maxEven = INT_MIN;
        int minOdd = INT_MAX;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                maxEven = max(maxEven, a[i]);
            } else {
                minOdd = min(minOdd, a[i]);
            }
        }
        if (minOdd - maxEven >= 2)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}