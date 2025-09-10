#include <iostream>
using namespace std;
int main()
{
  int n, pi, qi, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> pi >> qi;
    if (qi - pi >= 2)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}