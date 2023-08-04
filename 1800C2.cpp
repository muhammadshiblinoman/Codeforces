#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T ;  cin >> T;
	while( T-- ){
		int n ;  cin >> n;
		int Arr[n+2];
		priority_queue<int>pq;
		for(int i = 0; i < n; i++)  cin >> Arr[i];
		long long sum = 0;
		for (int i = 0; i < n ; i++){
			if( Arr[i] != 0){
				pq.push(Arr[i]);
			} else{
				if(!pq.empty()){
					long long topV = pq.top();
					sum += topV;
					pq.pop();
				} else{
					sum +=0;
				}
			}
		}
		cout << sum <<'\n';
	}
}
