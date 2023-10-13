#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n , m , dx , dy , d;
	cin >> n >> m >> dx >> dy >> d;
	int a = min( dx - 1 , m - dy );
	int b = min ( dy - 1 , n - dx );
	if( a <= d && b <= d ) {
		cout << "-1\n";
		return;
	}
	cout << n+m - 2 <<'\n';
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
