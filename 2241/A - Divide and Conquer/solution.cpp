#include <bits/stdc++.h>
using namespace std;
// A. Divide and Conquer
 
int main() {
 
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
 
        if(x % y == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}