#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n , k ;
    cin >> n >> k;
    int arr[n+2];
    for( int i = 0; i < n; i++ ) {
        cin >> arr[i];
    }
    for( int i = 0; i < n; i++ ) {
        if( arr[i] == k ) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
}
