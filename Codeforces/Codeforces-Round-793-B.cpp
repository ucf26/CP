/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


signed main() {
    gg
    // we are considered to maximize x,
    // so we only focus on elements not in the right position
    T {
        int n;
        cin >> n;
        vector<int> vp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i != x) {
                vp.push_back(x);
            }
        }
        int res = vp[0];
        for (int i = 1; i < vp.size(); i++) {
            res &= vp[i];
        }
        cout << res << '\n';
    }
}