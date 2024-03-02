#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter upper bound: ";
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i == j || i + j == n)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}