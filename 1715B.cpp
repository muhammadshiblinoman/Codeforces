#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, b, s, sum = 0;
    cin>>n>>k>>b>>s;

    if(s < k*b || (n*(k-1))+(k*b) < s)
        cout<<"-1\n";
    else{
        long long rem = ((b/n)*k);
        vector<long long>ans(n, rem);
        long long extra = (b%n);
        long long add = s - ((b/n)*k*n);

        for(int i = 0; i < extra; i++){
            ans[i] += k;
            add -= k;
        }
        for(int i = 0; i < n; i++){
            if(add > 0 && add >= k){
                ans[i] += k-1;
                add -= k-1;
            }
            else{
                ans[i] += add;
                add = 0;
            }
            cout<<ans[i]<<' ';
        }
        cout<<"\n";
    }


}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin>>test;
    while(test--)
        solve();
}
