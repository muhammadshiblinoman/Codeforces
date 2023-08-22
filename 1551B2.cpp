#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n , k ; cin >> n >> k;
	int arr[n+2]; map<int,int>mp;
	vector<int>v[n+1];
	int ans[n+2] = {0};
	vector<pair<int,int>>vp;

	for(int i = 0; i < n; i++){
		int a ; cin >> a;
		mp[a]++;
		v[a].push_back(i);
	}
	for(auto u : mp){
		if(u.second >= k){
			int color = 1;
			for(int i = 0; i < k; i++){
				ans[v[u.first][i]] = color;
				color++;
			}
		} else{
			for(int i = 0; i < v[u.first].size(); i++){
				vp.push_back({u.first , v[u.first][i]});
			}
		}
	}
	int color = 1;
	int a = (vp.size() % k);
	for(int i = 0; i < vp.size() - a ; i++){
		int ind = vp[i].second;
		ans[ind] = color;
		color++;
		if(color > k){
			color = 1;
		}
	}
	for(int i = 0; i < n; i++){
		cout << ans[i] << " ";
	} cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
