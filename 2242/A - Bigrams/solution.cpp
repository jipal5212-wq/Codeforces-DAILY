#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        int count = 0;
        bool ok = false;
        for(int i = 0; i < k; i++) {
            int x;
            cin >> x;
            if(x >= 3)
                ok = true;
 
            if(x >= 2)
                count++;
        }
        if(ok || count >= 2)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}