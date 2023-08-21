#include<bits/stdc++.h>
using namespace std;
const long long N = 2e5+123;
vector<long long>adj[N];
long long cnt [N];

void dfs(long long node , long long  p){
	if(adj[node].size() == 1 && node != 1){
		cnt[node] = 1;
	}
	for(int child : adj[node]){
		if(child != p){
			dfs(child , node);
			cnt[node] += cnt[child];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while(t--){
		long long n; cin >> n;
		for(int i = 1; i <= n; i++){
			cnt[i] = 0;
			adj[i].clear();
		}
		for(int i = 1; i < n; i++){
			long long x , y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(1 , -1);
		long long q; cin >> q;
		while(q--){
			long long x , y; cin >> x >> y;
			cout << cnt[x] * cnt[y] << '\n';
		}
	}
}
