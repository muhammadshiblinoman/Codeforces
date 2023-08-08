#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int testCase; cin >> testCase;
	while(testCase--){
		int n ; cin >> n;
		vector<int>arr(n),ans;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++){
			int a ; cin >> a;
			arr[i] = arr[i] - a;
		}
		int maxNum = *max_element(arr.begin(),arr.end());
		for(int i = 0; i < n; i++){
			if(arr[i] == maxNum){
				ans.push_back(i+1);
			}
		}
		cout << ans.size() << '\n';
		for(auto u : ans){
			cout << u << " ";
		} cout << '\n';
	}
}
