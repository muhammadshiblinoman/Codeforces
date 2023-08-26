#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int arr[n+3];
	vector<int>v;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	if(arr[1] != n){
		cout << "NO\n";
		return;
	}
	v.push_back(0);
	for(int i = n; i >= 1; i--){
		while(v.size() <= arr[i]){
			v.push_back(i);
		}
	}
	for(int i = 1; i <= n; i++){
		if(arr[i] != v[i]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	return;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while(t--){
		solve();
	}
}
