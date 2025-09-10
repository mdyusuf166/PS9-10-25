#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int y, w;
  cin >> y >> w;
  int max_val = max(y, w);
  int need = 6 - max_val + 1;
  int total = 6;
  int gcd = __gcd(need, total);

  cout << need / gcd << "/" << total / gcd << endl;
  return 0;
}