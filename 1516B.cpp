#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	int arr[n+2];
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	int pre[n+4];
	pre[0] = 0;
	for(int i = 1; i <= n;i++){
		pre[i] = pre[i-1] ^ arr[i];
	}
	bool ok = false;
	for(int i = 0; i < n;i++){
		int a = pre[i];
		int b = pre[n] ^ pre[i];
		if(a == b){
			ok = true;
			break;
		}
	}
	for(int i = 0; i < n - 1; i++){
		int a = pre[i];
		for(int j = i + 1; j < n; j++){
			int b = pre[j] ^ pre[i];
			int c = pre[n] ^ pre[j];

			if(a == b && b == c){
				ok = true;
				break;
			}
		}
	}
	if(ok){
		cout << "YES\n";
	} else{
		cout << "NO\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
