#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k,q; cin >> n >> k >> q;
    long long Arr[n+1] , count=0 ,ans=0;
    for(int i=0;i<n;i++){
        cin >> Arr[i];
        if(Arr[i] <=q)  count++;
        else count=0;
        if(count >= k){
            ans += (count-k+1);
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
