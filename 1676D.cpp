#include<bits/stdc++.h>
using namespace std;
const int N = 203;
int arr[N][N];
int n , m , cnt;

void dfs(int x , int y , int dx , int dy){
  if(x < 1 or y < 1 or x > n or y > m) return;
    cnt += arr[x][y];
  if(x+dx < 1 or y+dy < 1 or x+dx > n or y+dy > m) return;
    dfs(x+dx , y+dy , dx , dy);
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        cin >> arr[i][j];
      }
    }
    int ans = -1;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        cnt = arr[i][j];
        dfs( i+1 , j+1 , 1 , 1 );
        dfs( i-1 , j-1 , -1 , -1 );
        dfs( i-1 , j+1 , -1 , 1 );
        dfs( i+1 , j-1 , 1 , -1 );
        ans = max(ans , cnt);
      }
    }
    cout << ans << '\n';
  }
}
