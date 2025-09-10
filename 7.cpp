#include <iostream>
#include <string>
using namespace std;

bool isLucky(int num)
{
  string s = to_string(num);
  for (char c : s)
  {
    if (c != '4' && c != '7')
    {
      return false;
    }
  }
  return true;
}
int main()
{
  string n;
  cin >> n;

  int count = 0;
  for (char c : n)
  {
    if (c == '4' || c == '7')
    {
      count++;
    }
  }
  if (isLucky(count))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}