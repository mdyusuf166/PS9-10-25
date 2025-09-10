#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int event, free_officers = 0, untreated = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> event;
    if (event == -1)
    {
      if (free_officers > 0)
      {
        free_officers--;
      }
      else
      {
        untreated++;
      }
    }
    else
    {
      free_officers += event;
    }
  }
  cout << untreated << endl;
  return 0;
}