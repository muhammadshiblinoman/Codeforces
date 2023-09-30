#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		int n;
		cin >> n;
		set<int>s1[n],all;
		for( int i = 0; i < n; i++ ){
			int k ;
			cin >> k;
			while( k-- ) {
				int x;
				cin >> x;
				s1[i].insert(x);
				all.insert(x);
			}
		}
		int ans = 0;
		for( auto u : all ) {
			set<int>t;
			for( int i = 0; i < n; i++  ) {
				if( s1[i].find(u) == s1[i].end() ) {
					for( int j : s1[i] ){
						t.insert( j );
					}
				}
			}
			ans = max( ans , (int)t.size() );
		}
		cout << ans << '\n';
	}
}
