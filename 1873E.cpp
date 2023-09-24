#include<bits/stdc++.h>
using namespace std;

void binarySearch( long long arr[] , long long x , int n ) {
	long long low = 1;
	long long high = 2e9;
	long long ans = 0;
	while( low <= high ) {
		long long sum = 0;
		long long mid = ( low + high + 1 ) / 2;
		for( int i = 0; i < n && sum <= x; i++ ) {
			if( mid > arr[i] ) {
				sum += (mid-arr[i]);
			}
		}
		if( sum > x ) {
			high = mid - 1;
		}
		else {
			low = mid + 1 ;
			ans = mid;
		}
	}
	cout << ans << '\n';

}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while( t-- ) {
		long long n , x;
		cin >> n >> x;
		long long arr[n+2];
		for( int i = 0; i < n; i++ ) {
			cin >> arr[i];
		}
		//sort( arr , arr + n );
		binarySearch( arr , x , n );
	}
}
