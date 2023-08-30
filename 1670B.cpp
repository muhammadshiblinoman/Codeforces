#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
	    string s; cin >> s;
	    map<char,int>mp;
	    int m; cin >>m;
	    while(m--)
	    {
	        char ch; cin >> ch;
	        mp[ch]++;
	    }
	    int ans = 0,cnt = 0;
	    for(int i = 0;i < n;i++)
	    {
	        if(!mp.count(s[i]))
	            cnt++;
	        else
	        {
	            ans = max(ans,cnt);
	            cnt = 1;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
