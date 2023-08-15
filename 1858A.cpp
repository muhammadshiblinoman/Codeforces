#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int a,b,c; cin >>a>>b>>c;
		long long x = (a + c);
		long long y = ( b + c);
		if(x > y) cout << "First\n";
		else if( x < y) cout << "Second \n";
		else{
			if(c&1) cout << "First\n";
			else cout << "Second\n";
		}
	}
}
