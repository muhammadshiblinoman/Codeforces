#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ; cin >> n;
	vector<int>v;
	v.push_back(0);
	for(int i = 1; i <= n; i++){
		int a ; cin >> a;
		v.push_back(a);
	}
	v.push_back(0);
	long long ans = 0;
	for(int i = 0; i <= n; i++){
		if(v[i] > v[i-1] && v[i] > v[i+1]){
			long long temp = max(v[ i-1 ] , v[i+1]);
			ans = ans + (v[i] - temp);
			v[i] = temp;
		}
	}
	long long a = 0;
	for(int i = 1; i <= n+1; i++){
		a = a + abs(v[i] - v[i-1]);
	}

	cout << a + ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
