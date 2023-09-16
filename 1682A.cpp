#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while ( t-- ) {
    int n; cin >> n;
    int arr[ n + 3 ];
    int ans = 0;
    bool ok = false;
    for( int i = 0; i < n; i++ ) {
      cin >> arr[i];
      if( arr[i] != i ) {
        if( !ok ) {
          ans = arr[i];
          ok = true;
        }
        else {
          ans = ans & arr[i];
        }
      }
    }
    cout << ans << '\n';
  }
}
