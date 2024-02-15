#include <iostream>
using namespace std;
int main()
{
  int number, count = 0;
  cout << "Enter number: ";
  cin >> number;
  while (number > 0)
  {
    if ((number & 1) > 0)
    {
      count++;
    }
    number = number >> 1;
  }

  cout << count << endl;
  return 0;
}
