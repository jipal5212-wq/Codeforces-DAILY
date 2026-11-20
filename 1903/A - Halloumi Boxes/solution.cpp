#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k >= 2) {
            cout << "YES
";
        } else {
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (a[i] < a[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
    return 0;
}