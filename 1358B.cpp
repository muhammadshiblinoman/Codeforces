#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n; cin >> n;
        int arr[n+3];
        for(int i = 0; i < n; i++){
        	cin >> arr[i];
        } sort(arr , arr + n);
        int cnt = 1;
        int ans = 0;
        for(int i = 0; i < n; i++){
        	if(cnt >= arr[i]){
        		ans = i + 1;
        	}
        	cnt++;
        }
        cout << ans + 1 << '\n';
    }
}
