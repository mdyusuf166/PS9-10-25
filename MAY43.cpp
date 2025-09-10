#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> birds(n + 2);

  for (int i = 1; i <= n; i++)
  {
    cin >> birds[i];
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;

    if (x > 1)
      birds[x - 1] += y - 1;

    if (x < n)
      birds[x + 1] += birds[x] - y;

    birds[x] = 0;
  }
  for (int i = 1; i <= n; ++i)
  {
    cout << birds[i] << endl;
  }
  return 0;
}