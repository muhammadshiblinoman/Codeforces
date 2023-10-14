#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int n = s.size();
  vector<pair<int, int>> v;

  if (s[0] <= s[n - 1])
  {
    for (int i = 1; i < n - 1; i++)
    {
      if (s[i] >= s[0] && s[i] <= s[n - 1])
      {
        v.push_back({s[i], i + 1});
      }
    }

    sort(v.begin(), v.end());
    cout << int(abs(s[n - 1] - s[0])) << " " << 2 + v.size() << '\n';
    cout << 1 << " ";
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i].second << " ";
    }
    cout << n << '\n';
  }
  else
  {
    for (int i = 1; i < n - 1; i++)
    {
      if ((s[i] <= s[0] && s[i] >= s[n - 1]))
      {
        v.push_back({s[i], i + 1});
      }
    }

    sort(v.begin(), v.end());
    cout << int(abs(s[n - 1] - s[0])) << " " << 2 + v.size() << '\n';
    cout << 1 << " ";
    for (int i = v.size() - 1; i >= 0; i--)
    {
      cout << v[i].second << " ";
    }
    cout << n << '\n';
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
