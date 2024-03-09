#include <iostream>
using namespace std;
int main()
{

  int n;
  int sum = 0;

  cout << "enter number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }

  cout << "sum of " << n << " odd number is: " << sum << endl;
  return 0;
}