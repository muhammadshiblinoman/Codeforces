#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n; int Arr[n];
    for(int i=0;i<n;i++) cin>>Arr[i];
    sort(Arr,Arr+n);
    int ans=0;
        for(int i=0;i<n/2;i++){
            ans+=Arr[n-1-i]-Arr[i];
        }
        cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
