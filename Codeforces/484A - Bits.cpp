/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

signed main() {
    gg
    // just start from l setting the least bits while it is less than r
    ll n; cin>>n;
    ll l, r;
    for(ll i=0;i<n;i++){
        cin>>l>>r;
        for(ll j=0;j<=60;j++){
            if((l | (1LL<<j)) <= r){
                l|=(1LL<<j);
            }
            else {
                break;
            }
        }
        cout<<l<<'\n';
    }
}
