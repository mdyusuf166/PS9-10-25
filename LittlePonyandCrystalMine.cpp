#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int mid = n / 2;

  for (int i = 0; i < n; i++)
  {
    int gap = abs(mid - i);
    cout << string(gap, '*');
    cout << string(n - 2 * gap, 'D');
    cout << string(gap, '*') << endl;
  }
  return 0;
}