#include <iostream>
using namespace std;
void PrintHello(int x)
{

  if (x == 0)
  {
    return;
  }
  else
  {
    cout << "Hello World !!\n";
    PrintHello(x - 1);
  }
}
int main()
{
  int num;
  cout << "enter number: ";
  cin >> num;
  PrintHello(num);

  return 0;
}
