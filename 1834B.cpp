#include <bits/stdc++.h>
using namespace std;
int main ()
{     
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        string a,b; cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int n=a.size(), m=b.size(), ans=0;
        bool gr=false;
        if (n<m) for (int i=1;i<=m-n;i++) a.push_back('0');
        else for (int i=1;i<=n-m;i++) b.push_back('0');
        for (int i=max(m,n)-1;i>=0;i--)
            if (a[i]<b[i] && !gr) gr=true, ans+=b[i]-a[i];
            else if (gr) ans+=9;
        cout<<ans<<"\n";
    }
}
