#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int arr[n+2];
		set<int>st; bool ans = false;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if((st.count(arr[i] + k)) || (st.count(arr[i] - k))){
				ans = true;
			}
			st.insert(arr[i]);
		}
		if(ans) cout << "YES\n";
		else cout << "NO\n";
	}
}
