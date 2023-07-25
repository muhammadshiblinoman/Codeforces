#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	vector<int>v1(n),v2(n);
	for(int i = 0; i < n;  i++){
		cin >> v1[i];
		v2[i] = v1[i];
	} sort(v2.begin(),v2.end());
	for(int i = 0; i < n; i++){
		if(!(v1[i] % 2 == v2[i] % 2)){
			cout << "NO\n";
			return ;
		}
	}
	cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test_case; cin >> test_case;
	while(test_case--){
		solve();
	}
}
