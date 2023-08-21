#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int arr[n+3];
	vector<vector<int>> ans;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	for(int i = 1; i <= n; i += 2){
		if(arr[i] != arr[i+1]){
			ans.push_back({1 , i , i+1});
			ans.push_back({2 , i , i+1});
			ans.push_back({1 , i , i+1});
			ans.push_back({1 , i , i+1});
			ans.push_back({2 , i , i+1});
			ans.push_back({1 , i , i+1});
		} else{
			ans.push_back({2 , i , i+1});
			ans.push_back({2 , i , i+1});
			ans.push_back({1 , i , i+1});
			ans.push_back({1 , i , i+1});
		}
	}
	cout << ans.size() << '\n';
	for(auto u : ans){
		for(auto i : u){
			cout << i << " ";
		} cout << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
