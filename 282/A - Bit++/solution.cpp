#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int x = 0, n;
    cin >> n;
 
    for(int i = 0; i < n; i++) {
        string op;
        cin >> op;
 
        if(op == "X++" || op == "++X")
            x++;
        else
            x--;
    }
 
    cout << x;
 
    return 0;
}