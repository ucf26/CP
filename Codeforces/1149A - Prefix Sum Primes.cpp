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
    // start with 2 and 1 to get 2 and 3 and then add the remaining twos 
    // to get most possible odd numbers and then remaining ones 
    int n; cin>>n;
    int freq[3]={0};
    for(int i=0;i<n;i++){
        int x; cin>>x;
        freq[x]++;
    }
    if(freq[2]) cout<<2<<' ', freq[2]--;
    if(freq[1]) cout<<1<<' ', freq[1]--;
    while(freq[2]--)cout<<2<<' ';
    while(freq[1]--)cout<<1<<' ';
    cout<<'\n';
    
    
}
