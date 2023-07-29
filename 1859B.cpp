#include<bits/stdc++.h>
using namespace std;

bool cmd(pair<int,int>&p1 , pair<int,int>&p2){
	if(p1.first == p2.first) return p1.second < p2.second;
	return p1.first > p2.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T; cin >> T;
	while(T--){
		int n , k ; cin >> n >> k;
		int Arr[n+2];
		vector<pair<int,int>>vp;
		for(int i = 1; i <= n; i++){
			cin >> Arr[i];
			if(Arr[i]%k != 0){
				Arr[i] = Arr[i]%k;
			} else{
				Arr[i] = k;
			}
			vp.push_back({Arr[i],i});
		} sort(vp.begin(),vp.end(),cmd);
		for(auto u : vp){
			cout << u.second << " ";
		} cout <<'\n';
	}
}
