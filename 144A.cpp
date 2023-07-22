#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define lcm __lcm
#define gcd __gcd
#define copy copy_n
#define qsort sort(v.begin(),v.end())
#define psort sort(v2.begin(),v2.end())
#define INF 0x7fffffff
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,a=0,b=100,c=0; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<=b){
            b=v[i];
            c=i;
        }
    }
    a=max_element(v.begin(),v.end())-v.begin();
    if(a<c) cout<<a+((n-1)-c)<<endl;
    else cout<<a+((n-1)-++c)<<endl;
return 0;
}