#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int cost = 0;
        for(int i = 0; i < str.length(); i++)
        {
            cost += str[i] - 'a' + 1;
        }
        int p;
        cin >> p;
        string s = str;
        sort(s.rbegin(), s.rend());
        unordered_map<char, int> ourmap;
        for(int i = 0; i < s.length(); i++)
        {
            if(cost > p)
            {
                ourmap[s[i]]++;
                cost -= s[i]-'a'+1;
            }
        }
        for(int i = 0; i < str.length(); i++)
        {
            if(ourmap[str[i]] > 0)
            {
                ourmap[str[i]]--;
                continue;
            }
            cout << str[i];
        }
        cout << endl;
    }
}
