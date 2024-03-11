#include <iostream>
using namespace std;
int power(int a, int b)
{
  if (b == 0)
  {
    return 1;
  }
  else
  {
    int result = a * power(a, b - 1);
    return result;
  }
}
int main()
{
  int a, b;
  cout << "enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b : ";
  cin >> b;
  int answer = power(a, b);
  cout << "the power of " << a << " of " << b << " is " << answer << endl;

  return 0;
}