#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	int arr[n+2];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int a = INT_MAX;
	int b = INT_MAX;
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > a  && arr[i] < b){
			ans++;
			b = min(b , arr[i]);
		}
		a = min(a , arr[i]);
	}
	cout << ans << '\n';
}

int main(){
	int t ; cin >> t;
	while(t--){
		solve();
	}
}
