#include <iostream>
#include <set>
using namespace std;
int main()
{
  int s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  set<int> s;
  s.insert(s1);
  s.insert(s2);

  s.insert(s3);

  s.insert(s4);
  int uniqueCount = s.size();
  int need_Buy = 4 - uniqueCount;

  cout << need_Buy << endl;
  return 0;
}