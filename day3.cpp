#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  int n;
  cin >> n;

  unordered_map<int, long long> countX;
  unordered_map<int, long long> countY;

  unordered_map<long long, long long> countXY;

  long long result = 0;

  for (int i = 0; i < n; ++i)
  {
    int x, y;
    cin >> x >> y;

    result += countX[x];

    result += countY[y];

    long long key = 1LL * x * 1000000001LL + y;
    result -= countXY[key];

    countX[x]++;
    countY[y]++;
    countXY[key]++;
  }

  cout << result << endl;

  return 0;
}
