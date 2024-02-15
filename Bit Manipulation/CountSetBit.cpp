// since there are two ways to count set bit in Number
// another is using the concept of right shift in previous code
// time complexity is O(ln n)

#include <iostream>
using namespace std;
int main()
{
  int number, count = 0;

  cout << "enter number: ";
  cin >> number;

  while (number > 0)
  {

    count++;
    number = number & (number - 1);
  }
  cout << "count: " << count << endl;
  return 0;
}