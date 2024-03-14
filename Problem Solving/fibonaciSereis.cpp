#include <iostream>
using namespace std;
int main()
{

  int a = 0;
  int b = 1;
  int num;

  cout << "\nenter the upper bound: ";
  cin >> num;

  cout << a << " " << b << " ";

  for (int i = 2; i <= num - 1; i++)
  {

    int temp = a + b;

    a = b;

    b = temp;

    cout << temp << " ";
  }
  return 0;
}