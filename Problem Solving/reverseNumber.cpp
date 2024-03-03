#include <iostream>
using namespace std;
int main()
{
  int num = 111;
  int reverse = 0;
  while (num != 0)
  {
    int rem = num % 10;
    reverse = rem + reverse * 10;
    num /= 10;
  }
  cout << reverse;
  return 0;
}