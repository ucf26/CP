/* بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيم */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll tt;cin>>tt;while(tt--)
#define gg std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


signed main() {
    gg
    // suppose the first sum -you can get sums until it- is  res, so we check for res+1 
    // there are 2 possibilities 
    // 1. if the next elemnt is less than or epual res+1 ----> it is okey 
    //          proof :
    //              if it is equal so okay, and if it is less than res+1 so we can complement it to res+1 from the previous res
    //              you have 1 2 3 4 5  9
    //                               ^ till here you get 10 check for 11, the nxt isn't 11 but since we can get any sum up to 10 we can get 6 and add to 9
     
    ll n; cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+n);
    ll res=0;
    for(ll i=0;i<n;i++){
        if(arr[i] > res + 1){
            break;
        }
        res+=arr[i];
    }
    
    cout<<res+1<<'\n';

    return 0;
}
