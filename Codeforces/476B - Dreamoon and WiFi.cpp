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
    // just check all possible distinations by cnsidering all possible + and - 
    string s1, s2; cin>>s1>>s2;
    int final_pos=0;
    for(int i=0;i<s1.size();i++){
        (s1[i]=='+')? final_pos++ : final_pos--;
    }
    int cnt=0;
    int cur_pos=0;
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='+')cur_pos++;
        if(s2[i]=='-')cur_pos--;
        if(s2[i]=='?')cnt++;
    }
    int res=0;

    for(int i=0;i < (1<<cnt);i++){
        int positive = 0;
        int negative = 0;
        for(int j=0;j<cnt;j++){
            if((i>>j)&1)positive++;
            else negative++;
        }
        if((cur_pos + positive - negative) == final_pos)res++;
    }
    cnt = (1<<cnt);
    cout<<fixed<<setprecision(9)<<(double)res/cnt<<'\n';
}