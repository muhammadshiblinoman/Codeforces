#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n+2];
	for( int i = 0; i < n; i++ ) {
		cin >> arr[i];
	}
	stack<int>st;
	if( arr[0] == 1 ) {
		st.push( 2 );
		for( int i = 1; i < n; i++ ) {
			if( st.top()+1 == arr[i] ) {
				st.push( st.top() + 2 );
			}
			else {
				st.push( st.top() + 1 );
			}
		}
		cout << st.top() << '\n';
		return ;
	}
	else {
		st.push(1);
		for( int i = 1; i < n; i++ ) {
			if( st.top()+1 == arr[i] ) {
				st.push( st.top() + 2 );
			}
			else {
				st.push( st.top() + 1 );
			}
		}
		cout << st.top() << '\n';
		return ;
	}
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while ( t-- ) {
		solve();
	}
}
