#include <iostream>
using namespace std;

int main()
{
  int k, n, w;
  cin >> k >> n >> w;
  int total_cost = k * w * (w + 1) / 2;
  int borrowed_money = total_cost - n;

  if (borrowed_money < 0)
    borrowed_money = 0;

  cout << borrowed_money << endl;
  return 0;
}