#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_operations_to_make_fashionable(vector<int> &a)
{
  int n = a.size();
  int min_val = *min_element(a.begin(), a.end());
  int max_val = *max_element(a.begin(), a.end());

  if ((min_val + max_val) % 2 == 0)
    return 0;

  int min_removals = n;
  for (int mask = 1; mask < (1 << n); ++mask)
  {
    vector<int> temp;
    for (int i = 0; i < n; ++i)
    {
      if (mask & (1 << i))
        temp.push_back(a[i]);
    }

    int temp_min = *min_element(temp.begin(), temp.end());
    int temp_max = *max_element(temp.begin(), temp.end());

    if ((temp_min + temp_max) % 2 == 0)
    {
      int removals = n - temp.size();
      min_removals = min(min_removals, removals);
    }
  }
  return min_removals;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    cout << min_operations_to_make_fashionable(a) << endl;
  }
  return 0;
}
