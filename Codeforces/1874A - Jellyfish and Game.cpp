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
    // since everyone wnts to maximize his score, so we consider the maximums and the minimums 
    // for the 1st player if his mini is greater the 2nd'maxi then he will swap otherwise he will do nothing for the first play
    // so if k is even the 2nd will get the overall maxi 

    T {
        ll n, m, k;
        cin >> n >> m >> k;
        ll mn1_i = 0, mn2_i = 0, mx1_i = 0, mx2_i = 0;
        ll mn1 = 1e9 + 5, mn2 = 1e9 + 5, mx1 = 0, mx2 = 0;
        vector<ll> a(n), b(m);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (mn1 > a[i]) {
                mn1_i = i;
                mn1 = a[i];
            }
            if (mx1 < a[i]) {
                mx1_i = i;
                mx1 = a[i];
            }
        }
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
            if (mn2 > b[i]) {
                mn2_i = i;
                mn2 = b[i];
            }
            if (mx2 < b[i]) {
                mx2_i = i;
                mx2 = b[i];
            }
        }
        if (mn1 < mx2) {
            swap(a[mn1_i], b[mx2_i]);
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)sum += a[i];
        if (k & 1 ^ 1) {
            mx1= *max_element(a.begin(), a.end());
            mn2= *min_element(b.begin(), b.end());
            mn1_i = 0, mn2_i = 0, mx1_i = 0, mx2_i = 0;
            sum-=mx1;
            sum+=mn2;
        }
        cout << sum << '\n';
    }
}