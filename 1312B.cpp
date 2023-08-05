#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while( t-- ){
		int n; cin >> n;
		vector<int>arr(n+2);
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr.rbegin(),arr.rend());
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		} cout << '\n';
	}
}
