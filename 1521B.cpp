#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int arr[n+2];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	long long a = 1999999973 , b = 1999999943;
	cout << n - 1 << '\n';
	for(int i = 0; i < n - 1; i++){
		if(i&1){
			cout << i+1 << " " << i+2 << " " << b << " " << min( arr[i] , arr[i+1]) << '\n';
			arr[i+1] = min(arr[i],arr[i+1]);
		} else{
			cout << i+1 << " " << i+2 << " " << a << " " << min( arr[i], arr[i+1]) << '\n';
			arr[i+1] = min(arr[i],arr[i+1]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
