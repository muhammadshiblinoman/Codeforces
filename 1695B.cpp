#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while( t-- ) {
		int n; cin >> n;
		int arr[n+2];
		int ans = INT_MAX;
		int index = 0;
		for( int i = 1; i <= n; i++ ) {
			cin >> arr[i];
			if ( ans > arr[i] ) {
				ans = arr[i];
				index = i;
			}
		}
		if( n&1 ) {
			cout << "Mike\n";
		}
		else {
			if( index & 1 ) {
				cout << "Joe\n";
			}
			else {
				cout << "Mike\n";
			}
		}
	}
}
