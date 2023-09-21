#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n , m;
	cin >> n >> m;
	string s;
	cin >> s;
	int ans = 0;
	for( int i = 0; i < n; i++ ) {
		if( s[i] == 'B' ) {
			ans++;
			i = i+m-1;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
