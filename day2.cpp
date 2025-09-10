#include <iostream>
#include <string>
using namespace std;

int main()
{
  string n;
  cin >> n;
  if (n.length() == 1)
  {

    cout << 0 << endl;
    return 0;
  }
  int count = 0;
  while (n.length() > 1)
  {
    long long sum = 0;
    for (char c : n)
    {
      sum += c - '0'; // Convert char to int
    }
    n = to_string(sum);
    count++;
  }
  cout << count << endl;
  return 0;
}