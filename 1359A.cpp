#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , m , k;
        cin >> n >> m >> k;
        if(n/k >= m){
        	cout << m << '\n';
        	continue;
        } else{
        	int cnt = m - n/k;
        	cnt = (cnt/(k-1)) + (cnt%(k-1) != 0);
        	cout << n/k - cnt << '\n';
        } 
    }
}
