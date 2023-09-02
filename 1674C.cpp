#include <bits/stdc++.h>
using namespace std;
long long factorial(int n){
    long long s = 1;
    for(int i = 1;i <= n; i++)s = s*2;
    return s;
}

int main(){
    
    int t;cin>>t;
    while(t--){
        string s; cin >> s;
        string c; cin >> c;
        int length = c.length();
        int count=0;
        for(int i = 0;i < c.length(); i++){
            if(c[i] == 'a')count++;
        }
        if(length == 1 && count == 1){
            cout << 1 << '\n';
        }
        else if(length == 1 && count == 0){
            cout << factorial(s.length()) << '\n';
        }
        else if(length > 1 && count >= 1){
            cout << -1 << '\n';
        }
        else{
            cout << factorial(s.length()) << '\n';
        }
    }
}
