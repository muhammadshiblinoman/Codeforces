#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc;
  cin >> tc;
  while (tc--)
  {
    string s;
    cin >> s;
    int one = 0, zero = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '1')
        one = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
      {
        zero = i + 1;
        break;
      }
    }
    if (one == 0 and zero == 0)
    {
      cout << n << endl;
    }
    else if (one == 0)
    {
      cout << zero << endl;
    }
    else if (zero == 0)
    {
      cout << (n - one) + 1 << endl;
    }
    else
      cout << abs(one - zero) + 1 << endl;
  }
}
