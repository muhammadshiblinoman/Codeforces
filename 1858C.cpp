#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n ; cin >> n;
		for(int i = 1; i <= n; i+= 2){
			for(int j = i; j <= n ; j *= 2){
				cout << j << " ";
			}
		} cout << '\n';
	}
}
