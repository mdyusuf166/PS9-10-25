#include <iostream>
using namespace std;

int main()
{
  int n, t, k, d;
  cin >> n >> t >> k >> d;

  int time_one_oven = ((n + k - 1) / k) * t;

  int total_cakes = 0;
  for (int time = 1; time < time_one_oven; ++time)
  {
    if (time % t == 0)
    {
      total_cakes += k;
    }
    if (time > d && (time - d) % t == 0)
    {
      total_cakes += k;
    }

    if (total_cakes >= n)
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}
