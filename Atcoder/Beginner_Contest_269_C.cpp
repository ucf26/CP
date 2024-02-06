/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



signed main() {
    gg
    // just we need to take all combinations of bits that have 1 
    // so we can take OR of the current one with the previous ones 
    
    ll num; cin>>num;
    vector<ll>pos;
    pos.push_back(0);
    for(int i=0;i<=60;i++){
        if((num>>i) &1LL)
        {
            int sz= pos.size();
            for(int j=0;j<sz;j++){
                pos.push_back((1LL<<i)|pos[j]);
            }
        }
    }
    for(auto it:pos)cout<<it<<'\n';
}