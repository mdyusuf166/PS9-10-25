#include <iostream>
using namespace std;

int main()
{
  int n, b, d;
  cin >> n >> b >> d;

  int count = 0;
  int waste = 0;

  for (int i = 0; i < n; i++)
  {
    int juc;
    cin >> juc;

    if (juc > b)
      continue; 

    waste += juc; 

    if (waste > d)
    {
      count++;
      waste = 0; 
    }
  }

  cout << count << endl;
  return 0;
}
