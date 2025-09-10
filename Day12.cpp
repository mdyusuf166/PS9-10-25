#include <iostream>

using namespace std;

int main()
{
  int n;
  long long x;
  cin >> n >> x;

  int dis_children = 0;
  long long iceCreams = x;

  for (int i = 0; i < n; i++)
  {
    char opreation;
    long long d;
    cin >> opreation >> d;
    if (opreation == '+')
    {
      iceCreams += d;
    }
    else if (opreation == '-')
    {
      if (iceCreams >= d)
      {
        iceCreams -= d;
      }
      else
      {
        dis_children++;
      }
    }
  }
  cout << iceCreams << " " << dis_children << endl;
  return 0;
}