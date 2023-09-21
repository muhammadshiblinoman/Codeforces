#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n+3];
	int mn = INT_MAX;
	for( int i = 0; i < n; i++ ){
		cin >> arr[i];
		mn = min ( mn , arr[i] );
	}
	//cout << mn << " ";
	long long ans = 1;
	for( int i = 0; i < n; i++ ) {
		if( arr[i] == mn ) {
			arr[i] = arr[i] + 1;
			break;
		}
	}
	for ( int i = 0; i < n; i++ ){
		ans *= arr[i];
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
