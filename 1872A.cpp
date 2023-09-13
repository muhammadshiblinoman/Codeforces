#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) {
    int a , b , c; cin >> a >> b >> c;
    int d = ceil( ( a + b ) / 2.0 );
    int e = d - min(a,b);
    int ans = ceil((e /  (c * 1.0)));
    cout << ans << '\n';
  }
}
