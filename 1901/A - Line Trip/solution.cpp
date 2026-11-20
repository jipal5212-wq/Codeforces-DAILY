#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int mdf = arr[0];                 
        int mdf2 = 2 * (x - arr[n - 1]);  
        for (int j = 0; j < n - 1; j++) {
            if ((arr[j + 1] - arr[j]) > mdf) {
                mdf = arr[j + 1] - arr[j];
            }
        }
        cout << max(mdf, mdf2) << "
";
    }
    return 0;
}