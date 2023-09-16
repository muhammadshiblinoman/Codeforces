#include <bits/stdc++.h>
#define cht=69
using namespace std;
int main()
{
	int t,n,k,x,i;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cin>>s;
		vector<int>p(n,1),q(n,0);
		for(i=0;i<n;i++)if(s[i]=='B')p[i]=0;
		q[0]=p[0];
		for(i=1;i<n;i++)q[i]=q[i-1]+p[i];
		x=q[k-1];
		for(i=k;i<n;i++)x=min(x,q[i]-q[i-k]);
		cout<<x<<endl;
	}
 
	return 0;
}
		   		   	 	  	 			 	       	
