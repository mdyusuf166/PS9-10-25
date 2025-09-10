#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;

  string original = "";

  for (int i = 0; i < n; ++i)
  {
    if ((original.length() % 2) == 0)
    {

      original = s[i] + original;
    }
    else
    {

      original = original + s[i];
    }
  }

  cout << original << endl;
  return 0;
}
