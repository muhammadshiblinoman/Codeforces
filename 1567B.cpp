#include <bits/stdc++.h>
using namespace std;
vector<int>v;
void solve(){
	int a , b; cin >> a >> b;
	int ans = v[a-1] ^ b;
	if(ans == 0){
		cout << a << '\n';
	} else if(ans > a || ans < a){
		cout << a + 1 << '\n';
	} else{
		cout << a + 2 << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	v.push_back(0);
	for(int i = 1; i < 3*1e5; i++){
		v.push_back(v[i-1] ^ i);
	}
	while(t--){
		solve();
	}
}
