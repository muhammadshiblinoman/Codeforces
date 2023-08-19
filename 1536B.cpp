#include<bits/stdc++.h>
using namespace std;

string ss;
void numToString(int num){
	if(num){
		numToString((num - 1) / 26);
		ss += ('a' + (num-1)%26);
	}
}

void solve(){
	int n ; cin >> n;
	string s ; cin >> s;
	string ans = "";
	int i = 1;
	while(1){
		ss = "";
		numToString(i);
		int pos = s.find(ss);
		if(pos == -1){
			ans = ss;
			break;
		}
		i++;
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
