#include <bits/stdc++.h>
using namespace std ;
const int N = 1123;
int adj[N][N];
int visited[N][N];
int n,m;
int dfs( int i , int j ){
	visited[i][j] = true;
	int ans = adj[i][j];
	if(!visited[i-1][j] && adj[i-1][j] != 0 && i != 0){
		ans += dfs(i-1,j);
	}if(!visited[i+1][j] && adj[i+1][j] != 0 && i != n-1){
		ans += dfs(i+1,j);
	}if(!visited[i][j+1] && adj[i][j+1] != 0 && j != m-1){
		ans += dfs(i,j+1);
	}if(!visited[i][j-1] && adj[i][j-1] != 0 && j != 0){
		ans += dfs(i,j-1);
	}
	return ans;
}

int main(){
	int T; cin >> T;
	while(T--){
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				visited[i][j] = false;
				cin >> adj[i][j];
			}
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(!visited[i][j] && adj[i][j] != 0){
					ans = max(ans ,dfs( i , j ));
				}
			}
		}
		cout << ans <<'\n';
	}
}
