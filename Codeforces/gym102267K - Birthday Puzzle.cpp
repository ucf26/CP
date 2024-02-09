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
    // get all the possible subsets using masks 
    // and take the OR of each subset and sum it up
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i< (1<<n) ;i++){
        ll s=0;
        for(int j=0;j<n;j++){
            if((i>>j)&1)s|=a[j];
        }
        sum+=s;
    }
    cout<<sum<<'\n';

}
