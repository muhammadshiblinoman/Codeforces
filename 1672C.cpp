#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--){
     int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = 0;
    for (int i = 0; i < n - 1; i++) 
        if (arr[i] == arr[i + 1]) {
            l = i;
            break;
        }
    for (int i = n - 1; i > 0; i--)
        if (arr[i] == arr[i - 1]) {
            r = i;
            break;
        }
 
    int res = r - l;
 
    if (res > 3)
        cout << res - 2;
    else if (res > 1) cout << 1;
    else cout << 0;
    cout << endl;
  }
}
