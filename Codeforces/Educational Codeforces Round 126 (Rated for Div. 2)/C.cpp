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
    // the optimal height is mx or mx+1, because if greater there will be unuseful increaments 
    // so count number of days for mx and mx+1
    // assume n.of days = md so odd days is (md+1)/2, even = md/2
    // We can use +2 operations greedily and then just check if the number of +1
    // operations is sufficient to grow up the remaining heights.
    T {
        ll n;
        cin >> n;
        vector<ll> h(n);
        ll mx = 0;
        for (ll i = 0; i < n; i++) {
            cin >> h[i];
            mx = max(mx, h[i]);
        }
        ll res = 1e18;
        for (auto mx_h: {mx, mx + 1}) {
            ll l = 0, r = 1e18;
            while (l <= r) {
                ll md = (l + r) / 2;
                ll available_2 = md / 2;
                ll available_1 = (md + 1) / 2;
                ll need1 = 0;
                for (ll i = 0; i < n; i++) {
                    ll need2 = (mx_h - h[i]) / 2;
                    if ((mx_h - h[i]) & 1)need1++;

                    if (need2 <= available_2) {
                        available_2 -= need2;
                    } else {
                        need2 -= available_2;
                        available_2 = 0;
                        need1 += 2 * need2;
                    }

                }
                if (need1 <= available_1) {
                    res = min(res, md);
                    r = md - 1;
                } else {
                    l = md + 1;
                }
            }
        }
        cout << res << '\n';
    }
}