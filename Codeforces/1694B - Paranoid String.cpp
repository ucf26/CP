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
    // the answer is initially n because every single char in a paranoid 
    // and also can be noticed that if a a string has zero and one it is possible to make a paranoid 
    
    T {
        ll n; cin >> n;
        string s; cin >> s;
        ll ans = n;
        for (ll i = 1; i < n; i++) {
            if(s[i]!=s[i-1])ans+=i;
        }
        cout << ans << '\n';
    }
}
