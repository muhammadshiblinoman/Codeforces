#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while(t--){
		int n , m; cin >> n >> m;
		char matrix [n+2][m+2];
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
				if(matrix[i][j] == '1'){
					ans++;
				}
			}
		}
		int cnt = -1;
		for(int i = 0; i < n - 1; i++){
			for(int j = 0; j < m - 1; j++){
				int one = 0;
				for(int k = i; k <= i+1; k++){
					for(int l = j; l <= j+1; l++){
						if(matrix[k][l] == '1'){
							one++;
						}
					}
				}
				one = max(0 , (one - 2));
				cnt = max(cnt , (ans - one));
			}
		}
		cout << cnt << '\n';
	}
}
