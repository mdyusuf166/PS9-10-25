#include <iostream>
using namespace std;
int main()
{
  long long n, m, a;
  cin >> n >> m >> a;
  long long x = (n + a - 1) / a; // Equivalent to ceil(n / a)
  long long y = (m + a - 1) / a;
  // Equivalent to
  cout << x * y << endl; // Total number of tiles needed
  return 0;
}