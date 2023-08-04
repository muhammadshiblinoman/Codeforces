#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , k ; cin >> n >> k;
	map< char , int >mp;
	string  s ; cin >> s;
	for( int i : s ){
		mp[i]++;
	}
	int ans = 0;

	for( char a = 'a'; a <= 'z'; a++ ){
		int min_count = min( mp[a] , mp[a-32] );
		ans = ans + min_count;
		mp[a] = mp[a] - min_count;
		mp[a-32] = mp[a-32] - min_count;
	} //cout << ans << " ";
	for(char b = 'a' ; b <= 'z' ; b++){
		int max_count = max ( mp[b] , mp[b-32] );
		int a = min ( k , (max_count/2));
		ans = ans + a;
		k = k - a;
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while( t-- ){
		solve();
	}
}
