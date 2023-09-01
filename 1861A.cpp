#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	bool a = false;
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			a = true;
			break;
		}
	}
	if(a == true){
		return false;
	} else{
		return true;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string ss = "";
		ss += s[0];
		int a = 0;
		for(int i = 1; i < s.size(); i++){
			ss += s[i];
			a = stoll(ss);
			bool ans = isPrime(a);
			if(ans == true){
				break;
			} else{
				ss.pop_back();
			}
		}
		cout << a << '\n';
	}
}
