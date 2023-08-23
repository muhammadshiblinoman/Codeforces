#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n , a , b; cin >> n >> a >> b;
		string s ; cin >> s;
		int cnt1 = 0 , cnt2 = 0;
		if(b < 0){
			int c = 0;
			for(int i = 0; i < n; i++){
				if(s[i] == '0'){
					while(s[i] == '0' && i < n){
						i++; c++;
					}
					cnt1++;
				}
			}
			if(c != n) cnt1++;
			int d = 0;
			for(int i = 0; i < n; i++){
				if(s[i] == '1'){
					while(s[i] == '1' && i < n){
						i++;
						d++;
					}
					cnt2++;
				}
			}
			if(d != n) cnt2++;
			int ans = min(cnt1 , cnt2) * b;
			cout << ans + (a * n) << '\n';
		} else{
			cout << n * a + n * b << '\n';
		}
	}
}
