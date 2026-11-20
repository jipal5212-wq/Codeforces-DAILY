#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long xk,yk,xq,yq;
        cin>>xk>>yk;
        cin>>xq>>yq;
        vector<pair<long long,long long>> d={
            {a,b},{a,-b},{-a,b},{-a,-b},
            {b,a},{b,-a},{-b,a},{-b,-a}
        };
        set<pair<long long,long long>> king,queen;
        for(auto [dx,dy]:d){
            king.insert({xk+dx,yk+dy});
            queen.insert({xq+dx,yq+dy});
        }
        int ans=0;
        for(auto p:king){
            if(queen.count(p))
                ans++;
        }
 
        cout<<ans<<"
";
    }
}