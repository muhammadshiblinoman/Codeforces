#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll T; cin >> T;
	while( T-- ){
		ll n , c ; cin >> n >> c;
		vector<ll>Arr(n+1);
		for(ll i = 0 ; i < n ; i++){
			cin >> Arr[i];
		} 
		ll sum = 0, f = 1, e = 1e9 , mid = (( f + e ) / 2);
		while( f <= e ){
			mid = (( f + e ) / 2);
			sum = 0;
			for ( ll i = 0; i < n; i++){
				sum = sum + ( 1LL * ((Arr[i] + 2* mid) * (Arr[i] + 2 * mid)) );
				if(sum > c){
					break;
				}
			}
			if(sum == c){
				cout << mid <<'\n';
				break;
			} else if( sum < c){
				f = mid + 1;
			} else{
				e = mid - 1;
			}
		}
	}
}
