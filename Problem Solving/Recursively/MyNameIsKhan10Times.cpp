#include <iostream>
using namespace std;
void Print(int n)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    cout << "My Name is Khan\n";
    Print(n - 1);
  }
}
int main()
{
  int num = 10;
  Print(num);

  return 0;
}