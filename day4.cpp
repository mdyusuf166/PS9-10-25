#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

typedef long long ll;

// Check if a number is prime
bool is_prime(ll n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (ll i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}

int main()
{
  ll q;
  cin >> q;

  // Case: q is 1 or a prime number
  if (q == 1 || is_prime(q))
  {
    cout << 1 << endl;
    cout << 0 << endl;
    return 0;
  }

  set<ll> divisors;

  // Find all non-trivial divisors (not 1 and not q)
  for (ll i = 2; i * i <= q; ++i)
  {
    if (q % i == 0)
    {
      if (i != q)
        divisors.insert(i);
      if (q / i != q && q / i != i)
        divisors.insert(q / i);
    }
  }

  // Case: only one non-trivial divisor → second player wins
  if (divisors.size() == 1)
  {
    cout << 2 << endl;
    return 0;
  }

  // Check if any divisor is a losing move for player 2 (i.e., it's a prime)
  for (ll d : divisors)
  {
    if (is_prime(d))
    {
      cout << 1 << endl;
      cout << d << endl;
      return 0;
    }
  }

  // No losing move available → second player wins
  cout << 2 << endl;
  return 0;
}
