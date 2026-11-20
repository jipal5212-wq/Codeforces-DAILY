#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int ans=0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c>=2)
        {
            ans++;
        }
        else
        {
            // Do nothing
        }
 
    }
    cout << ans << endl;
 
    return 0;
}