#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<int> in_deg(3, 0);
  int g[3][3] = {};
  for (int i = 0; i < 3; i++)
  {
    string s;
    cin >> s;
    int u = s[0] - 'A';
    int v = s[2] - 'A';
    if (s[1] == '>')
      swap(u, v);

    if (g[u][v] == 0)
    {
      g[u][v] = 1;
      in_deg[v]++;
    }
  }

  string result = "";
  for (int i = 0; i < 3; i++)
  {
    bool found = false;
    for (int j = 0; j < 3; j++)
    {
      if (in_deg[j] == 0)
      {
        result += (char)('A' + j);
        in_deg[j] = -1; // mark as used
        for (int k = 0; k < 3; k++)
        {
          if (g[j][k])
            in_deg[k]--;
        }
        found = true;
        break;
      }
    }
    if (!found)
    {
      cout << "Impossible" << endl;
      return 0;
    }
  }

  cout << result << endl;
  return 0;
}
