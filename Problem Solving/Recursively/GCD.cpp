#include <iostream>
using namespace std;
int GCD(int x, int y)
{
  if (y == 0)
  {
    return x;
  }
  else
  {
    int result = GCD(y, x % y);
    return result;
  }
}
int main()
{
  int x = 366;
  int y = 60;
  cout << "The gcd of " << x << " and " << y << " is : " << GCD(x, y) << endl;
  return 0;
}