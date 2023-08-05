#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while( t-- ){
		int n ; cin >>n;
		int arr[n+3];
		long long sum = 0, one = 0;
		for(int i = 0; i < n; i++){
			int a; cin >> a;
			if(a == 1) one ++;
			else sum = sum + a - 1;
		}
		if(n > 1 && sum >= one ) cout << "YES\n";
		else cout << "NO\n";
	}
}
