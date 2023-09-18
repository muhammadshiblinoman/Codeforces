#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int arr[ n + 1 ];
	map<int,int>mp;
	for( int i = 0; i < n; i++ ) {
		cin >> arr[i];
		mp[arr[i]]++;
	}
	for( auto u : mp ) {
		if ( u.second == 1 ) {
			cout << -1 << '\n';
			return;
		}
	}
	int b = 0; int k = 0;
	for( auto u : mp ) {
		k += u.second; //cout << k << " ";
		b++;
		cout << k << " ";
		for( int j = 1; j < u.second; j++ ) {
			cout << b << " ";
			b++;
		}
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
