#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>ans;
    int i = 1;
    while( ans.size() != n ) {
        ans.push_back( i );
        i = i + 2;
    }
    for( auto u : ans ) {
        cout << u << " ";
    }
    cout << '\n';

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
}
