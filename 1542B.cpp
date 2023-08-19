#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n , a , b; cin >> n >> a >> b;
	if(n == 1 || (n % b) == 1|| b == 1){
		cout << "YES\n";
		return;
	} else if (a == 1){
		if(n%b == 1){
			cout << "YES\n";
			return;
		} else{
			cout << "NO\n";
			return;
		}
	} else{
		bool ok = false;
		int i = 0;
		while(pow(a,i) <= n){
			long long ans = n - pow(a , i);
			if(ans%b == 0){
				ok = true;
			}
			i++;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
