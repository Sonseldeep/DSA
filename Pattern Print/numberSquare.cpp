#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter upper bound: ";
  cin >> n;
  for (int i = 0; i <= n; ++i)
  {
    for (int i = 0; i <= n; ++i)
    {
      cout << i;
    }
    cout << endl;
  }

  return 0;
}