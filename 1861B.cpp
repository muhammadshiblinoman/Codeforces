#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    string a; cin >> a;
    string b; cin >> b;
    int N = a.size();
    bool ok = false;
    for (int j = 0; j < N - 1; j++){
      if (a.substr(j, 2) == "01" && b.substr(j, 2) == "01"){
        ok = true;
      }
    }
    if (ok){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
