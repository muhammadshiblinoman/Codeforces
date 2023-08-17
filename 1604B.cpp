#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	int arr[n+2];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	bool ok = false;
	for(int i = 0; i < n - 1; i++){
		if(arr[i] >= arr[i+1]){
			ok = true;
			break;
		}
	}
	if(n&1){
		if(ok){
			cout << "YES\n";
		} else{
			cout << "NO\n";
		}
	} else{
		cout << "YES\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
