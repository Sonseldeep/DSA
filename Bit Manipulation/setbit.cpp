#include <iostream>
using namespace std;
int main()
{
  int number, i;
  cout << "\n5Enter number: ";
  cin >> number;
  cout << "\nEnter i: ";
  cin >> i;

  int result = number & (1 << i);
  if (result != 0)
  {
    cout << "\nSET" << endl;
  }
  else
  {
    cout << "\nNot SET" << endl;
  }

  return 0;
}