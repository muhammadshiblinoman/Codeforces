#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n , k ; cin >> n >> k;
	map<int,int> first , last;
	for(int i = 1; i <= n; i++){
		int a ; cin >> a;
		if(!first[a]){
			first[a] = i;
			last[a] = i;
		} else{
			last[a] = i;
		}
	}
	while(k--){
		int a , b; cin >> a >> b;
		if(!first[a] || !last[b]){
			cout << "NO\n";
			continue;
		}
		if(first[a] < last[b]){
			cout << "YES\n";
		} else{
			cout << "NO\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
