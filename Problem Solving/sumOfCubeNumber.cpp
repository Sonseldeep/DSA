#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  int n;
  cout << "enter n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    sum += i * i * i;
  }
  cout << "sum of  " << n << " element cube is " << sum << endl;

  return 0;
}