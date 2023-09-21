#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define el "\n"
int main() 
{
    int tc;
    cin>>tc;
    int s[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    while(tc--)
    {
        int ans=0;
       char c[10][10];
       for(int i=0;i<10;i++)
       {
           for(int j=0;j<10;j++)
           {
               cin>>c[i][j];
               if(c[i][j]=='X')ans+=s[i][j];
           }
       }
       cout<<ans<<el;
    }


}
