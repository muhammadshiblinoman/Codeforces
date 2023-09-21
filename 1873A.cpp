#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	if( s[0] == 'c' && s[2] == 'b' || s[0] == 'b'&& s[2] == 'a') {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
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
