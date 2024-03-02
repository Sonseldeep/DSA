#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "upper bound for no of line: ";
  cin >> a;
  cout << "lower bound for no of star: ";
  cin >> b;

  for (int i = 1; i <= a; ++i)
  {
    for (int i = 1; i <= b; ++i)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}