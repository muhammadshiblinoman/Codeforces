#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve() {
	int n;
	cin >> n;
	stack<int>ans;
	vector<int>v;
	int arr[n+2];
	for( int i = 0; i < n; i++ ) {
		cin >> arr[i];
	}
	ans.push(arr[0]);
	for( int i = 1; i < n; i++ ) {
		int a = ans.top();
		if( a + arr[i] > 0 && a - arr[i] >= 0 && arr[i] != 0 ) {
			cout << -1 << '\n';
			return;
		}  
		else {
			ans.push( a + arr[i] );
		}
	}
	while( !ans.empty() ){
		v.push_back(ans.top());
		ans.pop();
	}
	for( int i = v.size()-1; i >= 0; i-- ) {
		cout << v[i] << " ";
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
