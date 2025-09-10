#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> a[i];
  }

  string s;
  cin >> s;

  int totalCalories = 0;
  for (char c : s)
  {
    int index = c - '1';
    totalCalories += a[index];
  }
  cout << totalCalories << endl;
  return 0;
}