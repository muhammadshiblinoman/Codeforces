#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n; cin >> n;
        int arr[n+3];
        long long sum = 0;
        for(int i = 0 ; i < n; i++){
        	cin >> arr[i];
        	sum = sum + arr[i];
        }
        if(sum%2 == 0){
        	cout << "YES\n";
        } else{
        	cout << "NO\n";
        }
    }
}
