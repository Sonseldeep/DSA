// from unsigned integers return the number of 1 bits it has
// time complexity: O(ln n)

#include <iostream>
using namespace std;
int main()
{
  int number, count = 0;
  cout << "\n enter number: ";
  cin >> number;
  while (number > 0)
  {
    count++;
    number &= number - 1;
  }
  cout << "\nCount: " << count << endl;

  return 0;
}

// another approach:
// time complexity: O(ln n)
// this is abit slower than above not asymptically

// #include <iostream>
// using namespace std;
// int main()
// {
//   int number, count = 0;
//   cout << "Enter number: ";
//   cin >> number;
//   while (number > 0)
//   {
//     if ((number & 1) > 0)
//     {
//       count++;
//     }
//     number = number >> 1;
//   }
//   cout << "Count: " << count << endl;

//   return 0;
// }