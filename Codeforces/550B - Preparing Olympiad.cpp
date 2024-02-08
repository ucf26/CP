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
    // we can check all possible subsets of the problems 
    ll n, l, r, x; cin>>n>>l>>r>>x;
    vector<ll>vp(n);
    for(ll i=0;i<n;i++) cin>>vp[i];

    ll res=0;
    for(ll i=0;i< (1<<n) ;i++){
        ll sum=0;
        ll mn=1e10+5;
        ll mx=0;
        ll cnt=0;
        for(ll j=0;j<n;j++){
            if((i>>j)&1){
                sum+=vp[j];
                mx=max(mx, vp[j]);
                mn=min(mn, vp[j]);
                cnt++;
            }
        }
        if(cnt >=2 && sum<=r && sum>=l && (mx-mn)>=x)res++;
    }

    cout<<res<<'\n';

}