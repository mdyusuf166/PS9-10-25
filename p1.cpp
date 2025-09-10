#include <iostream>
#include <queue>

using namespace std;
int main()
{
  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);
  cout << "Fornt element: " << q.front() << endl;
  q.pop();
  cout << "Fornt element: " << q.front() << endl;
  return 0;
}
