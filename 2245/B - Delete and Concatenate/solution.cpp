#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> a(n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
 
        int maxk = n / 2;
        int cnt = (int)(lower_bound(a.begin(), a.end(), c) - a.begin());
        int k = min(maxk, cnt);
 
        long long prefix = 0;
        for(int i = 0; i < k; i++) prefix += a[i];
 
        long long ans = sum - c * n + (long long)k * c - prefix;
        cout << ans << "
";
    }
}