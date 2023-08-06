#include <bits/stdc++.h>
using namespace std;
const int mx=2e5+123;
int Arr[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int TC; cin>>TC;
    while(TC--){
        int n; cin>>n;
        priority_queue<pair<int,int>>pq;
        pq.push({n,-1});
        int cnt=1;
        while(!pq.empty()){
            int len=pq.top().first;
            int l=pq.top().second*-1;
            pq.pop();
            int r=l+len-1;
            int position;
            if(len%2) position=(l+r)/2;
            else position=(l+r-1)/2;
            Arr[position]=cnt;
            cnt++;
            int l1=l;
            int r1=position-1;
            int l2=position+1;
            int r2=r;
            if(l1<=r1) pq.push({r1-l1+1,-l1});
            if(l2<=r2) pq.push({r2-l2+1,-l2});
        }
        for(int i=1;i<=n;i++) cout<<Arr[i]<<" ";
        cout<<'\n';
    }
}
