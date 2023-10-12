#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n , k , r , l;
	cin >> n >> k >> r >> l;

	for( int i = 1; i <= n; i++ ) {
		for( int j = 1; j <= n; j++ ) {
			if( (i+j-r-l+10*k)%k == 0 ) {
				cout << 'X';
			}
			else {
				cout << '.';
			}
		}
		cout << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
