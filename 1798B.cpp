#include <bits/stdc++.h>
using namespace std;

void solve() {
    int day;
    cin >> day;
    map<int, int> mp;
    for (int i = 1; i <= day; i++) {
        int n;
        cin >> n;
        while(n--) {
            int t;
            cin >> t; 
            mp[t] = i;
        }
    }
    /*for(auto u : mp){
    	cout << u.first << " " << u.second << '\n'; 
    }*/
    vector<int> ans(day + 1, 0);
    int cnt = 0;
    for (auto u : mp) {
        if (ans[u.second] == 0) {
            ans[u.second] = u.first;
            cnt ++;
            continue;
        }
    }
    if(cnt != day) cout << -1 << '\n';
    else {
        for (int i = 1; i <= day; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }

}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--) solve();
}
