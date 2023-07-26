#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t ;
	while( t-- ){
		v1.clear(); v2.clear();
		int n , k; cin >> n >> k;
		int arr[n+4];
		int cnt1 = 1, cnt2 = 1;
		for(int i = 1; i <= n; i++){
			cin >> arr[i];
		} 
		v1.push_back(1); v2.push_back(n);
		for(int i = 2; i <= n; i++){
			if(arr[1] == arr[i]){
				cnt1++;
				v1.push_back(i);
			}
		}
		for(int i = n-1 ; i >= 1; i--){
			if(arr[n] == arr[i]){
				cnt2++;
				v2.push_back(i);
			}
		}
		if((cnt1 >= k && v1[v1.size()-1] == n) || (cnt2 >= k && v2[v2.size()-1] == 1)){
			cout << "YES\n";
		} else if( (cnt1 >= k) && (cnt2 >= k) && (v1[k-1] < v2[k-1]) ){
				cout << "YES\n";
		} else{
			cout << "NO\n";
		}
	}
}
