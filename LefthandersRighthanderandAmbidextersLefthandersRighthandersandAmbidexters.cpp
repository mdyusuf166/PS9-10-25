#include <iostream>
using namespace std;

int main()
{
  int l, r, a;
  cin >> l >> r >> a;

  int diff = abs(l - r);
  int use = min(diff, a);
  a -= use;
  if (l < r)
  {
    l += use;
  }
  else
  {
    r += use;
  }
  int add = a / 2;
  l += add;
  r += add;

  cout << 2 * min(l, r) << endl;
  return 0;
}