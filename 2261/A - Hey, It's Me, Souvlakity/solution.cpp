#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mini=0;
        int maxi=0;
        int count=0;
        int maxi2=0;
        vector<int>nums;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
                if(mini==0){
                    mini=i+1;
                }
                maxi= max(maxi,i+1);
            }
            else{
nums.push_back(i+1);
            }
        }
        sort(nums.begin(),nums.end());
        if(count==2){
           cout<<1<<"
";        
        } else
        cout<<maxi-mini<<"
";
    }
    return 0;
}