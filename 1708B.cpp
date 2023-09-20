#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,l,r;
        cin>>n>>l>>r;
        int done=0;
        long long a[n];
        for(long long i=1;i<=n;i++){
            long long q=(l-1)/i;
            if(q>=l){
                a[i-1]=q;
            }
            else if(q<l){
                if((i*(q+1))>r){
                    done=1;
                    break;
                }
                a[i-1]=i*(q+1);
            }
        }
        if(done==0){
            cout<<"YES\n";
        for(long long i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        }
        else{
            cout<<"NO\n";
        }
    }
}
