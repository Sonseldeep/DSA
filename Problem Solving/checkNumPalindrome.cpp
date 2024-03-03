#include <iostream>
using namespace std;
int main()
{

  int num = 111;
  int originalNum = num;

  int reverse = 0;
  while (num != 0)
  {
    int rem = num % 10;
    reverse = rem + reverse * 10;
    num /= 10;
  }
  cout << "reverse: " << reverse << endl;
  cout << "original: " << originalNum << endl;
  if (reverse == originalNum)
  {
    cout << "Palindrome" << endl;
  }
  else
  {
    cout << "Not a palindrome\n";
  }

  return 0;
}