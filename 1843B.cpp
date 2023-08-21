#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long>v(n);
        long long ans=0,cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>0) ans+=v[i];
            else if(v[i]<0){
                ans+=(-v[i]);
            }
        }
        v.push_back(10);
        int c=0;
        for(int i=0;i<n+1;i++){
            if(v[i]<0){
                c++;
            }
            else if(v[i]>0){
                if(c>0){
                    cnt++;
                }
                c=0;
            }
        }
        //if(v[n-1]<0) cnt++;
        cout<<ans<<" "<<cnt<<'\n';
    }
}
