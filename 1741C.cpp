#include <bits/stdc++.h>
typedef long long ll;
#define M 998244353
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    ll sum=0;
    int ans = n;
    for(int i=1;i<=n;i++){
        sum+=v[i];
        ll tsum = 0; 
        int c = 0; 
        int m = 0;
        for(int j=i+1;j<=n;j++){
            tsum+=v[j];
            c++;
            m=max(m,c);
            if(tsum==sum){
                tsum=0;
                c=0;
            }
        }
        if(tsum==0){
            ans = min(ans,max(m,i));
        }
    }
    cout<<ans<<endl;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
