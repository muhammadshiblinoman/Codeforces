#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t; cin >> t;
  while (t--)
  {
    string str; cin >> str;
    set<ll> s;
    ll n = str.size();
    for (ll i = 0; i < n; i++)
      s.insert(str[i]);
    ll flag = 0;
    ll k = s.size();
    for (ll i = 0; i <= n - k; i++)
    {
      map<char, ll> m;
      for (ll j = i; j <= i + k - 1; j++)
      {
        m[str[j]]++;
        if (m[str[j]] > 1)
          flag = 1;
      }
      if (flag == 1)
        break;
    }
    if (flag == 0)
      cout << "YES" << endl;
    else
    {
      cout << "NO" << endl;
    }
  }
}
