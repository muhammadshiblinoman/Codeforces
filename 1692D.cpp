#include<bits/stdc++.h>
using namespace std;
bool st[24][60];

void solve()
{
	memset(st,0,sizeof st);
	int st1,st2;
	scanf("%d:%d",&st1,&st2);
	int t;
	cin>>t;
	int ans=0;
	while(!st[st1][st2])
	{
		string x1,x2;
		x1=to_string(st1);
		x2=to_string(st2);
		if(x1.size()==1) x1="0"+x1;
		if(x2.size()==1) x2="0"+x2;
		if(x1[0]==x2[1]&&x1[1]==x2[0]) ans++;
		st[st1][st2]=true;
		st2+=t;
		st1=(st1+st2/60)%24;
		st2%=60;
	}
	cout<<ans<<endl;
}


int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		solve();
	}
	return 0;
}
