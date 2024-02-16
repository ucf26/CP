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
    // for any integer to be devisible by 3, the sum of its digits must be also devisible by 3
    // so remaining to check if it is devisible by 20, so multiples of 20 are (20, 40, 80, 60, 100....)
    // so there should be at least (two zeros) or (an even integer and zero)
    T {
        string s; cin >> s;
        int sz = s.size();
        int sum = 0;
        int cnt0 = 0, cnt_e = 0;
        for (int i = 0; i < sz; i++) {
            if ((s[i] - '0') & 1 ^ 1 && (s[i] - '0'))cnt_e++;
            if (s[i] == '0')cnt0++;
            sum += (s[i] - '0');
        }
        if (sum % 3 == 0 && ((cnt0 > 1) || (cnt_e && cnt0))) {
            cout << "red\n";
        } else cout << "cyan\n";
    }
}
