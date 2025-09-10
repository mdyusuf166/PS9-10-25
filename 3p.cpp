#include <iostream>
#include <queue>

using namespace std;
int main()
{

  queue<string> customers;
  customers.push("Alice");
  customers.push("Bob");
  customers.push("Charlie");
  while (!customers.empty())
  {
    cout << "Serving customer: " << customers.front() << endl;
    customers.pop();
  }
  return 0;
}