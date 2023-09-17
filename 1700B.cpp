#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans;
	if(s[0]=='9')
	{
		reverse(s.begin(),s.end());
		for(int i=0;i<s.size();i++)
			ans.push_back('1');
		ans.back()+=10;
		for(int i=0;i<s.size();i++) 
			ans[i]-=s[i]-'0';
		for(int i=0;i<s.size();i++){
			while(ans[i]<'0'){
				ans[i]+=10;
				ans[i+1]--;
			}
		}
		reverse(ans.begin(),ans.end());
		cout << ans << endl;
	}
	else{
		for(int i=0;i<n;i++){
			cout<<char('9'-s[i]+'0');
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			int ch=s[i]-'0';
			ans=ans+to_string(9-ch);
		}
	}
   }
}

