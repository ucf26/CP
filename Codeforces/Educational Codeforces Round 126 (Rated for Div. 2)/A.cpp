/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

signed main() {
    gg
    /*
     *  a1 a2 
     *  b1 b2  ----> if ((a2 - b1) + (b2-a1) < (a2-a1) + (b2-b1)) >> swap
     */
    T {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        for (int i = 1; i <= n; i++) {
            if (abs(a[i] - b[i - 1]) + abs(b[i] - a[i - 1]) < abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1])) {
                swap(a[i], b[i]);
            }
        }

        int res = 0;
        for (int i = 2; i <= n; i++) {
            res += abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]);
        }

        cout << res << '\n';
    }
}