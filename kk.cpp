// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//   string s;
//   cin >> s;

//   int upper = 0, lower = 0;

//   for (char c : s)
//   {
//     if (isupper(c))
//       upper++;
//     else
//       lower++;
//   }

//   if (upper > lower)
//   {
//     for (char &c : s)
//       c = toupper(c);
//   }
//   else
//   {
//     for (char &c : s)
//       c = tolower(c);
//   }

//   cout << s << endl;
//   return 0;
// }
// //

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  string s;

  cin >> n >> s;

  int anton = 0, danik = 0;

  for (char c : s)
  {
    if (c == 'A')
      anton++;
    else if (c == 'D')
      danik++;
  }

  if (anton > danik)
    cout << "Anton" << endl;
  else if (danik > anton)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;

  return 0;
}
