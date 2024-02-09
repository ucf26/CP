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
    // due to the low constrains, we can brute force all sols. from a to b
    // we can fix a and check what we can add to b and take the OR with a 
    // and we can fix b and check what we can add to a and take the OR
    T {
        int a, b;
        cin >> a >> b;
        int ans = b - a;
        for (int i = 0; i < (b - a); i++) {
            if (((a + i) | b) == b) {
                ans = min(ans, i + 1);
            }
            if (((b + i) | a) == (b + i)) {
                ans = min(ans, i + 1);
            }
        }
        cout << ans << '\n';
    }
}