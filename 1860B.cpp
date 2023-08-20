#include<bits/stdc++.h>
using namespace std;

void solve(){
	int m , k , a1 , ak; cin >> m >> k >> a1 >> ak;
	int w = m / k;
    ak -= w;
    int x = m % k;
    a1 -= x;
    if(a1 >= k)
    {
        ak += a1 / k;
        a1 /= k;
    }
    int ans = -min(0,a1) - min(0,ak);
    cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
