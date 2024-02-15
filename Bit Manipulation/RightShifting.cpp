#include <iostream>
using namespace std;
int main()
{
  cout << "\n---------------Right Shift---------------" << endl;
  int number, i, rightShift;
  cout << "\nEnter the number: ";
  cin >> number;
  cout << "\nEnter the bound [i ]: ";
  cin >> i;
  rightShift = number >> i;
  cout << "\nAfter Shift: " << rightShift << endl;
  cout << "---------------------------------------------" << endl;

  return 0;
}