#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  string s;
  cin >> s;

  char current = 'a';
  int total = 0;

  for (char c : s)
  {
    int dist = abs(c - current);
    int move = min(dist, 26 - dist);
    total += move;
    current = c;
  }
  cout << total << endl;
  return 0;
}