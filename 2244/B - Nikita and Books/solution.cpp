#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        bool ok = true;
 
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < i + 1) {
                ok = false;
                break;
            }
 
            arr[i + 1] += arr[i] - (i + 1);
        }
        if (ok && arr[n - 1] >= n)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}