#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T ; cin >> T;
	while( T-- ){
		int n ; cin >> n;
		int Arr[n+2];
		for(int i = 0; i < n; i++){
			cin >> Arr[i];
		}
		int sum = Arr[0] , ans = 1;

		for( int i = 0; i < n ; i++){
			sum = ( sum & Arr[i]);
			if(sum == 0){
				if( i == n-1 ) break;
				ans++;
				sum = Arr[i+1];
			}
		}
		if(sum != 0) ans--;
		cout << max(ans,1) << "\n";
	}
}
