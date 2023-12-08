#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while( t-- ) {
		int n ; cin >> n;
		string s ; cin >> s;
		map<char,int>mp;
		for( int i = 0; i < n; i++ ) {
			mp[s[i]]++;
		}
		int mx = 0;
		for( auto u : mp ) {
			mx = max( mx , u.second );
		}
		//cout << mx << '\n';
		int ans = 2*mx - n;
		//cout << ans << '\n';
		if( n&1 ) {
			ans = max(ans,1 );
		}
		else {
			ans = max( ans , 0 );
		}
		cout << ans << '\n';

	}
}
