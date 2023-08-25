#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , m ; cin >> n >> m;
	char name[n + 2][m + 2];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> name[i][j];
		}
	}
	int a,b,c,d;
	a = b = c = d = 100;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(name[i][j] == 'v'){
				int ans = j;
				a = min(a , ans);
			}
		}
	}
	//cout << a << ' ';
	for(int i = 0; i < n; i++){
		for(int j = a + 1; j < m; j++){
			if(name[i][j] == 'i'){
				int ans = j;
				b = min(b , ans);
			}
		}
	}
	//cout << b << " ";
	for(int i = 0; i < n; i++){
		for(int j = b + 1; j < m; j++){
			if(name[i][j] == 'k'){
				int ans = j;
				c = min(c , ans);
			}
		}
	}
	//cout << c << ' ';
	for(int i = 0; i < n; i++){
		for(int j = c + 1; j < m; j++){
			if(name[i][j] == 'a'){
				int ans = j;
				d = min(d , ans);
			}
		}
	}
	//cout << d << " ";
	if(a != 100 && b != 100 && c != 100 && d != 100){
		if((a < b ) && (b < c) && (c < d)){
			cout << "YES\n";
		} else{
			cout << "NO\n";
		}
	} else {
		cout << "NO\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tast; cin >> tast;
	while(tast--){
		solve();
	}
}
