#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<int> prefix1(n + 1, 0);
        vector<int> prefix2(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                prefix1[i + 1] = prefix1[i] + 1;
            } else {
                prefix1[i + 1] = prefix1[i] - 1;
            }
 
            if (a[i] == 3) {
                prefix2[i + 1] = prefix2[i] - 1;
            } else {
                prefix2[i + 1] = prefix2[i] + 1;
            }
        }
 
        vector<int> bestFromRight(n + 1, -1000000);
        for (int k = n - 1; k >= 1; k--) {
            bestFromRight[k] = prefix2[k];
            if (bestFromRight[k + 1] > bestFromRight[k]) {
                bestFromRight[k] = bestFromRight[k + 1];
            }
        }
 
        bool found = false;
 
        for (int p1 = 1; p1 <= n - 2; p1++) {
            bool leftOk = (prefix1[p1] >= 0);
            bool someMiddleWorks = (bestFromRight[p1 + 1] >= prefix2[p1]);
 
            if (leftOk && someMiddleWorks) {
                found = true;
                break;
            }
        }
 
        if (found) {
            cout << "YES" << "
";
        } else {
            cout << "NO" << "
";
        }
    }
 
    return 0;
}