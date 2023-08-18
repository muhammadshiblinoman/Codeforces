#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int t = 0 , m = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'T'){
			 t++;
		} else{
			m++;
		}
	}
	if(t == 2 * m){
		bool ok = false;
		int a = 0, b = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'T'){
				a++;
			} else{
				b++;
			}
			if(a < b){
				ok = true;
				break;
			}
		}
		int c = 0, d = 0;
		for(int i = n - 1; i >= 0; i--){
			if(s[i] == 'T'){
				c++;
			} else{
				d++;
			}
			if(c < d){
				ok = true;
				break;
			}
		}
		if(ok) cout << "NO\n";
		else cout << "YES\n";
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
