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
    // since factorial(15) is greater than 1e12
    // so we can try all possible factorials and count the remaining powers of 2 
    // we do the possible factorials using bitmasks 
    // and count powers of 2 by counting the set bits using __builtin_popcountll() 
    T {
        ll num;
        cin >> num;
        int fac = 2;
        ll fact[15] = {0};
        fact[0] = 1;
        for (int i = 1; i < 15; i++) {
            fact[i] = i * fact[i - 1];
        }
        int res = 100;
        for (int i = 0; i < (1 << 15); i++) {
            ll sum = 0;
            int cnt = 0;
            for (int j = 0; j < 15; j++) {
                if ((i >> j) & 1) {
                    sum += fact[j];
                    cnt++;
                }
            }
            if (sum <= num) {
                res = min(res, cnt + __builtin_popcountll(num - sum));
            }
        }
        cout << res << '\n';
    }
}