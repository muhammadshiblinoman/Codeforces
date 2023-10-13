#include<bits/stdc++.h>
using namespace std;

void solve() {
	int N , D ;
	cin >> N >> D ;
	priority_queue<int>pq;
	int ans = 0;
	for( int i = 0; i < N; i++ ) {
		int a;
		cin >> a;
		if( a <= D ) {
			pq.push( a );
		}
		else {
			ans++;
		}
	}
	int sum = 0;
	int j = 0;
	N = N - ans;
	while( N > 0 ) {
		sum = pq.top()*++j;
		N--;
		if( sum > D && (N >= 0 || N - j >= 0) ) {
			pq.pop();
			ans++;
			j = 0;
		}
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int t;
	// cin >> t;
	// while( t-- ) {
		solve();
	//}
}
