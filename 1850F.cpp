#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T; cin >> T;
	while( T-- ){
		int n ; cin >> n ;
		vector<int>v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		vector<int>fre(n+2,0);
		for(int i = 0; i < n; i++){
			if(v[i] > n) continue;
			fre[v[i]]++;
		} 
		int ans = 0;
		for(int i = 1; i <= n; i++){
			int a = 0;
			for(int j = 1; j*j <= i; j++){
				if(i%j == 0){
					a += fre[j];
					if(i/j != j){
						a += fre[i/j];
					}
				}
			}
			//cout << a << " ";
			ans = max(ans , a);
		}
		cout << ans <<'\n';
	}
}
