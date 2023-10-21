#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve() {
	string s;
	cin >> s;
	string s1,s2;
	int c = 0;
	for( int i = 0; i < s.size(); i++ ) {
		int a = s[i] - 48;
		if( a %2 == 0 ) {
			s1.push_back(a/2 + 48);
			s2.push_back(a/2 + 48);
		}
		else {
			if( c%2 == 0 ) {
				s1.push_back(a/2 + 48);
				s2.push_back((a/2)+1 + 48);
			}
			else {
				s1.push_back((a/2)+1 + 48 );
				s2.push_back(a/2 + 48);
			}
			c++;
		}
	}
	cout << stoll(s1) << " " << stoll(s2) << '\n';

}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
