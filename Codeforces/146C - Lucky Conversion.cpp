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
    // we can check the number of different characters that must be changed 
    // and also consider the number of swaps 
    
    string a, b; cin>>a>>b;
    int i=0;
    int cnt1=0, cnt2=0;
    for(;a[i]!='\0'; i++){
        (a[i]=='4')? cnt1++: 1 ;
        (b[i]=='4')? cnt2++: 1 ;
    }
    int n=i+1;
    bool fl = (cnt2>=cnt1);
    int d = abs(cnt1 - cnt2);
    int ans=d;
    if(fl){
        for(int j=0;j<n ;j++){
            if(a[i]=='7'){
                if(d) {
                    a[i] = '4';
                    d--;
                }
                else break;
            }
        }
    }
    else {
        for(int j=0;j<n ;j++){
            if(a[i]=='4'){
                if(d) {
                    a[i] = '7';
                    d--;
                }
                else break;
            }
        }
    }

    for( i=0;i<n;i++){
        if(a[i]!=b[i]){
            ans++;
        }
    }
    cout<<ans/2<<'\n';
}
