/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int n;
bool is_prim(ll num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0)return 0;
    }
    return 1;
}

signed main() {
    gg
    // any even number can be represnted as sum of 2 primes
    // any even number can be represnted as sum of 3 primes
    //        and can be represnted as sum of 2 primes if (n-2) is prime
    cin>>n;
    if(n&1^1){
        if(n==2)cout<<1;
        else cout<<2;
    }
    else {
        if(is_prim(n))cout<<1;
        else if(is_prim(n-2))cout<<2;
        else cout<<3;
    }

}
