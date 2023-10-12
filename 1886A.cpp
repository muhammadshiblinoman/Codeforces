#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if( n < 7 ) {
		cout << "NO\n";
		return;
	}
	if( n == 9 ) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	cout << 1 << " ";
	n = n - 1;
	int a = n % 3;
	if( a == 0 ) {
		cout << 2 << " " << n - 2 << '\n';
	}
	else {
		cout << a + a << " " << n - 2*a << '\n';
	}
}

int main() {
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
