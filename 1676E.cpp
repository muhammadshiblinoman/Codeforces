#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--){
    int n , q; cin >> n >> q; //cout << n << q;
    vector<int>arr(n+3);
    int ar[n+3];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    sort(arr.rbegin() , arr.rend());
    ar[0] = arr[0];
    for(int i = 1; i < n; i++){
      ar[i] = ar[i-1] + arr[i];
    }

    while(q--){
      int m ; cin >> m;
      int low = 0; int high = n-1; int mid = 0;
      int ans = -1;
      while(low <= high){
        mid = (low + high) / 2;
        if(ar[mid] >= m){
          ans = mid + 1;
          high = mid - 1;
        }
        else{
          low = mid + 1;
        }
      }
      cout << ans << '\n';
    }
  }
}
