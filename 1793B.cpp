#include <bits/stdc++.h>
using namespace std;
vector<int>ans;

void total(int maximum , int minimum){
	for ( int i = maximum ; i >= minimum; i--){
		ans.push_back(i);
	} for ( int i = minimum + 1 ; i < maximum ; i ++){
		ans.push_back(i);
	}

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T ; cin >> T;
	while( T-- ){
		ans.clear();
		int maximum , minimum ; cin >> maximum >> minimum;
		total(maximum , minimum);
		cout << ans.size() << '\n';
		for(auto u : ans){
			cout << u << " ";
		} cout <<'\n';
	}
}
