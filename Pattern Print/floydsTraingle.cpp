#include <iostream>
using namespace std;
int main()
{
  int x = 1;
  int n;
  cout << "enter upper bound: ";
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << x;
      x++;
    }
    cout << '\n';
  }

  return 0;
}