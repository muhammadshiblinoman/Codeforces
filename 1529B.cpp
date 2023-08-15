#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n ; cin >> n;
		int arr[n+2];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int ans = 0;
		int a = arr[0];
		int b = arr[1];
		int c = abs(a - b);
		int minE = c;
		int i = 1;
		while( minE >= arr[i] && i < n  ){
			i++;
			ans++;
			a = b;
			b = arr[i];
			c = abs(a - b);
			minE = min(minE , c);
		}
		cout << ans + 1 << '\n';
	}
}
