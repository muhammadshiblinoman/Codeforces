#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n ; cin >> n;
		vector<int> v;
		int arr[n+3];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		v.push_back(arr[0]);
		for(int i = 1 ; i < n; i++){
			if(arr[i-1] <= arr[i]){
				v.push_back(arr[i]);
			} else{
				v.push_back(arr[i]);
				v.push_back(arr[i]);
			}
		}
		cout << v.size() << '\n';
		for(auto u : v){
			cout << u << " ";
		} cout << '\n';
	}
}
