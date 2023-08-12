#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int arr[N][N];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n ; cin >> n;
	int mid = (n / 2) + 1;
	int first = mid;
	int last = mid;
	int odd = 1;
	int even = 2;
	for(int i = 1; i <= mid; i++){
		for(int j = first; j <= last; j++){
			arr[i][j] = odd;
			odd = odd + 2;
		}
		first--;
		last++;
	}
	first++; last--;
	for(int i = mid+1; i <= n; i++){
		first++;
		last--;
		for(int j = first; j <= last; j++){
			arr[i][j] = odd; 
			odd = odd + 2;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(arr[i][j] == 0){
				arr[i][j] = even;
				even = even + 2;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << arr[i][j] << " ";
		} cout << '\n';
	}

}
