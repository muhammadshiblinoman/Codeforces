#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T ; cin >> T;
	while(T--){
		long long n ; cin >> n;
		int i = 1;
		while(n%i == 0){
			i++;
		} cout << i-1 << '\n';
	}
}
