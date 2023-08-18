#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n , m; cin >> n >> m;
	vector<int>v[n+3];
	vector<int>ans[n+5];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			int a ; cin >> a;
			v[i].push_back(a);
		}
	}
	for(int i = 0; i < n; i++){
		sort(v[i].begin(),v[i].end());
	}

	// for(auto u : v){
	// 	for(int i : u){
	// 		cout << i << " ";
	// 	}cout << '\n';
	// }

	for(int i = 0; i < m; i++){
		int a = INT_MAX;
		int index = -1;
		for(int j = 0; j < n; j++){
			if(a > v[j][0]){
				a = v[j][0];
				index = j;
			}
		}
		for(int j = 0; j < n; j++){
			if(index == j){
				ans[j].push_back(v[j][0]);
				v[j].erase(v[j].begin());
			} else{
				ans[j].push_back(v[j][v[j].size()-1]);
				v[j].pop_back();
			}
		}
	}
	for(auto u : ans){
		for(auto i : u){
			cout << i << " ";
		}cout << '\n';
	}

}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
