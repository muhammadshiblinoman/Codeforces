#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	bool ok = false;
	for(int i = 0; i*111 <= n; i++){
		if((n - (i * 111)) % 11 == 0){
			ok = true;
			break;
		}
	}
	if(ok) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
