#include <bits/stdc++.h>
using namespace std;
int min(int x, int y){
    if(2*x<y){
        return 2*x;
    }
    else{
        return y;
    }
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int sum = 0;
        int n,m,x,y ;   
        cin>>n>>m>>x>>y;
        char arr[n][m];
        for(int i =0; i<n;i++){
            for(int j = 0; j<m; j++){
                cin>>arr[i][j];
            }
        }

        for(int i = 0; i<n;i++){
            for(int j = 0; j<m; j++){


                if(arr[i][j] == '.'){

                    if(arr[i][j+1] == '.' && m>1 && j<m-1){
                        j++;
                        sum = sum + min(x,y);
                    }
                    else{
                        sum = sum+x;
                    }
                }
            }
        }
        cout<<sum<<'\n';   
    }
}
