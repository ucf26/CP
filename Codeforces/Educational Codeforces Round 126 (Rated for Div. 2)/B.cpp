/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int calc(int num)
{
    int res=15;
    for(int i=0;i<=15;i++){
        for(int j=0;j<=15;j++){
            if(((num+j)<<i)%(1<<15) == 0){
                res= min(res, i+j);
            }
        }
    }
    return res;
}

signed main() {
    gg
    // the first observation is the answeris always <= 15 
    // because -the worst case it has 1 in the least bit- we should 
    // shift the whole number to make zeros before the 15th bit 
    // ex:      consider  1 = 0000 0000 0000 0001
    // we need to make it   = 1000 0000 0000 0000 
    // so the most bit is one and the rest is zero 
    // but if we add ones it may decreas number of shifts (if there is two consecutive ones (0011) --> 0100)
    int n; cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        cout<<calc(num)<<" \n"[i==n-1];
    }
}