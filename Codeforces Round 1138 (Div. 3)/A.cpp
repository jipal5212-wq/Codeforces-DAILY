#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;
        unordered_map<int,int>mp;
        unordered_set<int>s1,s2;
        int pos=0;
        while(s1.insert(pos).second){
            mp[pos]++;
            pos=(pos+a)%l;
        }
        pos=0;
        while(s2.insert(pos).second){
            mp[pos]++;
            pos=(pos+b)%l;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==2)
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
