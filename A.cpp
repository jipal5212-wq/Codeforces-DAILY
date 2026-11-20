#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n < 4)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
          {
                cout << 4 << " ";}
            else if(i == 4)
            {
                cout << 1 << " "; }
            else {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
