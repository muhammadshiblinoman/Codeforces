#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int>ans;
		ans.push_back(n);
		 for (int i = 0; i <= 32 && __builtin_popcount(n) > 1; i++) {
	        if (n & (1 << i)) {
	            n -= (1 << i);
	            ans.push_back(n);
	        }
    	}
    	while(n > 1){
    		n = n / 2;
    		ans.push_back(n);
    	}
		cout << ans.size() << '\n';
		for(int i : ans){
			cout << i << " ";
		} cout << '\n';
	}
}
