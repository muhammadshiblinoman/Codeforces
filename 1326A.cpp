#include "bits/stdc++.h"
#define ll long long
using namespace std;

void solve () {
    ll number;
    cin >> number;
    if (number == 1) cout << -1 << endl;
    else {
        cout << '2';
        for (int i = 0; i < number - 1; i++)cout << '3';
        cout << endl;
    }
}
int main (){
    int t ; cin >> t;
    while (t--)
    solve();
}
