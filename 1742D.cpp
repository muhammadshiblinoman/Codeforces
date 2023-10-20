#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve() {
	int n;
	cin >> n;
	
    vector<int>v(1010);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[x]=i+1;
    }
    int ans=-1;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(v[i]&&v[j]&&__gcd(i,j)==1)
                ans=max(ans,v[i]+v[j]);
        }
    }
    cout<<ans<<endl;

}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		d.clear();
		solve();
	}
}
