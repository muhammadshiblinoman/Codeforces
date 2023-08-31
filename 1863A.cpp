#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		 int n,a,q;
	    cin>>n>>a>>q;
	    string s; cin>>s;
	    bool ok=0,ok2=0;
	    int of=0,on=a,p=0;
	    if(on==n) ok=1;
	    for(int i=0;i<q;i++){
	         if(s[i]=='+') of++,on++;
	         else on--;
	         if(on==n) ok=1;
	         if(of>=n-a) ok2=1;
	    }
	    if(ok) cout<<"YES\n";
	    else if(ok2) cout<<"MAYBE\n";
	    else cout<<"NO\n";

	}
}
