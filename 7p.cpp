#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> numbers;
  for (int i = 1; i <= 5; i++)
  {
    numbers.push(i);
  }
  cout << "Queue size: " << numbers.size() << endl;
  cout << "Front: " << numbers.front() << endl;
  cout << "Back: " << numbers.back() << endl;

  return 0;
}