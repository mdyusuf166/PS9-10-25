#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int> marks;

  marks.push(50);
  marks.push(70);
  marks.push(60);

  while (!marks.empty())
  {
    cout << "সর্বোচ্চ নাম্বার: " << marks.top() << endl;
    marks.pop();
  }

  return 0;
}
