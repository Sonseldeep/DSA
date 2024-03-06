#include <iostream>
using namespace std;
int SumOfDigit(int n)
{

  if (n == 0)
  {
    return 0;
  }

  else
  {

    return (n % 10) + SumOfDigit(n / 10);
  }
}
int main()
{
  int n;
  cout << "input n: ";

  cin >> n;

  int result = SumOfDigit(n);
  cout << "sum of digits: " << result << endl;

  return 0;
}