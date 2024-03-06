#include <iostream>
using namespace std;
void PrintRow(int n)
{

  if (n == 1)
  {
    cout << "*\n";
  }
  else
  {
    cout << "*";
    PrintRow(n - 1);
  }
}
void PrintTriangle(int n)
{
  if (n > 0)
  {
    PrintRow(n);
    PrintTriangle(n - 1);
  }
}
int main()
{
  int n = 5;
  PrintTriangle(n);

  return 0;
}