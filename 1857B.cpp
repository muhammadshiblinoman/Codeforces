#include<bits/stdc++.h>
using namespace std;

int main(){
	int testCase; cin >> testCase;
	while(testCase--){
		string s ; cin >> s;
		int index = -1;
		for(int i = s.size() - 1; i ; i--){
			if(s[i] >= '5'){
				s[i-1]++;
				index = i;
			}
		}
		if(s[0] >= '5'){
			cout << 1 ;
			index = 0;
		} for(int i = index; i < s.size(); i++){
			s[i] = '0';
		}
		cout << s << '\n';
	}
}
