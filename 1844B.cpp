#include <bits/stdc++.h>
using namespace std;

int main(){
	int test_case; cin >> test_case;
	while(test_case--){
		int n , i ; cin >> n ;
		int a = (n+1)/2;
		for ( i = 3 ; i <= a+1 ; i++){
			cout << i << " ";
		} cout << 1 <<' ';
		for( ; i <= n ; i++){
			cout << i << " ";
		} if(n>1){
			cout << 2 ;
		} cout << '\n';
	}
}
