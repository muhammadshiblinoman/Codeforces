#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  int arr[ n ];
  for( int i = 1; i <= n; i++ ) {
    cin >> arr[i];
  }
  if( n & 1) {
    cout << "NO\n";
    return;
  }
  sort( arr+1 , arr + 1 + n);
   for (int i = 2 ; i <= n / 2 ; i ++)
    {
        if (arr[i] >= arr[i + n / 2 - 1])
        {
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
    for (int i = 1 ; i <= n / 2 ; i ++) cout << arr[i] << " " << arr[i + n / 2] << " ";
    cout << '\n';

}


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while( t-- ) {
    solve();
  }
}
