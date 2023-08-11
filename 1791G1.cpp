#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while(t--){
		long long n , c ; cin >> n >> c;
		vector<long long>v;
		for(int i = 1; i <= n; i++){
			long long x; cin >> x;
			v.push_back(x + i);
		}
		sort(v.begin(),v.end());
		int ans = 0;
		for(int i = 0; i < n; i++){
			if(c >= v[i]){
				ans++;
			}
			else{
				break;
			}
			c = c - v[i];
		}
		cout << ans << '\n';
	}
}
