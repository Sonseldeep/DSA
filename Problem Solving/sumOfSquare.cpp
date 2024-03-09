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
    sum += i * i;
  }
  cout << "sum of  " << n << " element square is " << sum << endl;

  return 0;
}