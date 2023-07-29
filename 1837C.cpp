#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T ; cin >> T;
	while(T--){
		string s ; cin >> s;
		s="0"+s;
		for(int i = 1 ; i < s.size() ; i++){
			if(s[i] == '?'){
				s[i] = s[i-1];
			}
		}
		s.erase(s.begin());
		cout << s << '\n';
	}
}
