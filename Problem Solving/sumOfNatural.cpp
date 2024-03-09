#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  int n;
  cout << "\n---------------------------------------------------\n";
  cout << "\nenter the upper: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {

    sum += i;
  }
  cout << "\nsum of natural number up to " << n << " term is: " << sum << endl;
  cout << "\n---------------------------------------------------\n";
  return 0;
}