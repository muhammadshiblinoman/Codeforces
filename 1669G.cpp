#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n , m;

vector<vector<char>>game;
vector<vector<bool>>vis;

void solve(){
    cin >> n >> m;
    game.resize(n);
	vis.resize(n);

	for( int i = 0; i < n; i++ ) {
		game[i].resize(m);
		vis[i].resize(n);
	}
    for( int i = 0; i < n; i++ ) {
    	for( int j = 0; j < m; j++ ) {
    		cin >> game[i][j];
    	}
    }

    for( int k = 0; k < n; k++ ) {
    	for( int i = 1; i < n; i++ ) {
	    	for( int j = 0; j < m; j++ ) {
	    		if(game[i][j]=='.' && game[i-1][j] == '*') {
	    			swap(game[i][j],game[i-1][j]);
	    		}
	    	}
    	}
    }
    
    for( auto u : game ) {
    	for( auto i : u ) {
    		cout << i;
    	}
    	cout << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1; cin >> tc;
    while( tc-- ) {
        solve();
    }
}
