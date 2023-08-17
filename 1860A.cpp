#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	if(s == "()") {
		cout << "NO\n";
		return;
	}
	int n = s.size();
	bool cons = 0;
	for(int i = 1; i < n; i++) {
		if(s[i] == s[i-1]) {
			cons = 1;
			break;
		}
	}
	cout << "YES\n";
	if(cons) {
		for(int i = 0; i < n; i++) cout << "()";
	} else {
		for(int i = 0; i < n; i++) cout << '(';
		for(int i = 0; i < n; i++) cout << ')';
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while(t--) solve();

	return 0;
}
