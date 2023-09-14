#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) {
      return true;
    }
  }
  return false;
}
int divisor(int l) {
  int ans = 2;
  for(int i = 2; i < l; i++) {
    if(l % i == 0) {
      ans = i;
      break;
    }
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) {
    int r , l ; cin >> r >> l;
    if( l <= 3) {
      cout << -1 << '\n';
      continue;
    }
    bool ans = isPrime(l);
    if(ans == false && (l == r)) {
      cout << -1 << '\n';
      continue;
    }
    else if(ans == true){
      int a = divisor(l);
      cout << a << " " << l-a << '\n';
      continue;
    }
    else if(l != r) {
      if(r/2 == 0) {
        cout << 2 << " " << ceil(r/2.0) * 2 << '\n';
        continue;
      }
      else{
        int b = r/2;
        if((b*2) + 2 >= l) {
          cout << 2 << " " << (b*2) - 2<<'\n';
          continue;
        }
        else {
          cout << 2 << " " << 2*b << '\n';
          continue;
        }
        
      }
    }
  }
}
