#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	int arr[n+3];
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 2; i <= n; i++){
		int a = i + i - 1;
		if(a < arr[i]) continue;
		a = (a % arr[i]) + 1;
		int b = i - a;

		while(b >= 1){
			if(arr[i] * arr[b] == b + i){
				ans++;
			}
			b = b - arr[i];
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
