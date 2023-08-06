#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while( t-- ){
		int n; cin >> n;
		long long ans = 0;
		for(long long i = 1; i <= n/2; i++){
			ans = ans + i*i ;
		}
		cout << ans * 8 << '\n';
	}
}
