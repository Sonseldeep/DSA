#include <iostream>
using namespace std;
int main()
{
  int number, count = 0;
  cout << "Enter the number: ";
  cin >> number;

  while (number > 0)
  {
    count++;
    number &= number - 1;
  }
  if (count == 1)
  {
    cout << "\nPower of Two" << endl;
  }
  else
  {
    cout << "\nNot Power Of Two" << endl;
  }

  return 0;
}