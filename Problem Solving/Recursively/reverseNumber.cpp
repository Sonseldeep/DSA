#include <iostream>
using namespace std;
int sum = 0;
int rem;
int rev(int n)
{
  if (n)
  {
    rem = n % 10;
    sum = rem + sum * 10;
    rev(n / 10);
  }

  else
  {
    return sum;
  }
}

int main()
{
  int num = 1357, revNum;
  revNum = rev(num);
  cout << "reverse: " << revNum << endl;
  return 0;
}