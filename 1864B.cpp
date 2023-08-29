#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int k , n; cin >> n >> k;
        string s,ss[2]; cin >> s;
		if(k&1){
			ss[0] = ss[1] = "";
			for(int i = 0; i < n; i++){
				ss[i&1] += s[i];
			}
			sort(ss[0].begin(),ss[0].end());
			sort(ss[1].begin(),ss[1].end());
			for(int i = 0; i < n; i++){
				s[i] = ss[i&1][i/2];
			}
		} else {
			sort(s.begin(),s.end());
		}
		cout << s << "\n";
	}
	return 0;
}
