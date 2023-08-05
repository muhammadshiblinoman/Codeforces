#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while( t-- ){
		int k ; cin >> k;
		int arr[2*k+3];
		for( int i = 0; i < 2 * k ; i++ ){
			cin >> arr[i];
		}
		sort( arr , arr + k*2 );
		int ans = 1LL * abs(arr[k-1] - arr[k]);
		cout << ans << '\n';
	}
}
