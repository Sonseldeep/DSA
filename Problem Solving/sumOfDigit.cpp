#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the number: ";
  cin >> n;
  int sum = 0;
  cout << "sum of " << n << " is: ";

  while (n != 0)
  {

    int rem = n % 10;
    sum += rem;
    n /= 10;
  }
  cout << sum << endl;

  return 0;
}
