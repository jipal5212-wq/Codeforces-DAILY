#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;
        mp[team]++;
    }
    string winner;
    for (auto x : mp) {
        if (winner.empty() || x.second > mp[winner]) {
            winner = x.first;
        }
    }
 
    cout << winner;
}