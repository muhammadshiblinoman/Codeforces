#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while( t-- ) {
		string s; cin >> s;
		stack<char>st;
		int b = 0 , B = 0;
		for( int i = s.size()-1; i >= 0; i-- ) {
			if( s[i] == 'b' ) {
				b++;
			}
			else if( s[i] == 'B' ) {
				B++;
			}
			else if( s[i] >= 'a' && s[i] <= 'z' ) {
				if( b == 0 ) {
					st.push(s[i]);
				}
				else {
					b--;
				}
			}
			else if( s[i] >= 'A' && s[i] <= 'Z' ) {
				if( B == 0 ) {
					st.push(s[i]);
				}
				else {
					B--;
				}
			}
		}
		while( !st.empty() ) {
			cout << st.top();
			st.pop();
		}
		cout << '\n';
	}
}
