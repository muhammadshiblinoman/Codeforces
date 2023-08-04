#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , k , d , w; cin >> n >> k >> d >> w;
	int arr[n+1];
	int ans = 0;
	int a = 0 , b = 1;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(a == 0 or b <= arr[i]){
			ans++;
			a = k - 1;
			b = arr[i]+w+d+1;
			
		} else{
			a--;
		}
	}
	cout << ans <<'\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while(t--){
		solve();
	}
}
