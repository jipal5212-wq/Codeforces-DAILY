#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string x;
        cin >> x;
 
        int d = x.size();
        long long y = 1;
        for (int i = 0; i < d; i++) {
            y = y * 10;
        }
        y = y + 1;
 
        cout << y << "
";
    }
 
    return 0;
}