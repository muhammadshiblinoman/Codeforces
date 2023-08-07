#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int testCase; cin >> testCase;
	while(testCase--){
		int n ; cin >> n;
		int m = (n * (n - 1)) / 2;
		vector<int>arr(m);
		for(int i = 0; i < m; i++){
			cin >> arr[i];
		}
		sort(arr.rbegin(),arr.rend());
		cout << 1000000000 << " ";
		for(int i = 1 , j = 0; i < n; i++){
			cout << arr[j] << " ";
			j = j + i;
		} cout << '\n';
	}
}
