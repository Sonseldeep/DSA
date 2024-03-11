#include <iostream>
using namespace std;
void StarPrint(int n)
{

  if (n == 0)
  {
    return;
  }

  else
  {
    StarPrint(n - 1);
    for (int i = 1; i <= n; i++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}
int main()
{
  StarPrint(7);

  return 0;
}