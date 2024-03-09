#include <iostream>
using namespace std;
int main()
{

  int num;
  cout << "\nenter number: ";
  cin >> num;
  if (num % 2 != 0 && num > 0)
  {

    cout << "\nOdd \n";
  }
  else if (num == 0)
  {
    cout << "\nneither odd nor even\n";
  }
  else if (num < 0)
  {
    cout << "\nenter positive number\n";
  }
  else
  {
    cout << "\nEven\n";
  }

  return 0;
}