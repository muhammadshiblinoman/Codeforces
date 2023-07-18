#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T ; cin >> T;
	while(T--){
		int n,x1,y1,x2,y2;
		cin >> n >> x1 >> y1 >> x2 >> y2;
		int dist1 = 0 , dist2 = 0;
		if( x1 + y1 <= n) dist1 = min(x1,y1);
		if( x1 + y1 > n) dist1 = n - max(x1,y1) +1;
		if( x2 + y2 <= n) dist2 = min(x2,y2);
		if( x2 + y2 > n) dist2 = n - max(x2,y2) +1;
		cout << abs(dist1 - dist2) << '\n';
	}
	return 0;
}
