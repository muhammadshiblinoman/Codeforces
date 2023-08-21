#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long ans=0;
        if(n==1){  
            cout<<1<<'\n';  continue;
        }
        while(n!=0){
            ans+=n;
            n=n/2;
        }
        cout<<ans<<'\n';
    }
}
