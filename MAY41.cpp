#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int pos = 0;

  for (char c : t)
  {
    if (s[pos] == c)
    {
      pos++;
    }
  }
  cout << pos + 1 << endl;
  return 0;
}