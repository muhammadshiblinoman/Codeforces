#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while( t-- ){
		int n ; cin >>n;
		int arr[n+3];
		int ans = 0;
		for(int i = 1; i <= n ; i++){
			cin >> arr[i];
		}
		for(int i = 1; i <= n-1; i++){
			if(arr[i] > arr[i+1]){
				int a = arr[i];
				ans =  max(a,ans);
			}
		}
		cout << ans << '\n';
	}
}
