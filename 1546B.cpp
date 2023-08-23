#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , m; cin >> n >> m;
	string s[(n * 2) - 1] , ans = "";
	for(int i = 0; i < (n * 2) - 1; i++){
		cin >> s[i];
	}
	for(int i = 0; i < m; i++){
		map<char,int>mp;
		for(int j = 0; j < ( n* 2) - 1; j++){
			if(mp[s[j][i]] == 0){
				mp[s[j][i]] = 1;
			} else{
				mp[s[j][i]] = 0;
			}
		}
		for(auto u : mp){
			if(u.second != 0){
				ans += u.first;
				break;
			}
		}
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
