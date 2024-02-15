#include <iostream>
using namespace std;
int main()
{
  int number, i;
  cout << "-----Bit Manipulation-----" << endl;
  cout << "Enter number: ";
  cin >> number;
  cout << "Enter the bound: ";
  cin >> i;
  int leftShift = number << i;

  cout << "After left Shifting: " << leftShift << endl;
  cout << "-------------------------------" << endl;

  return 0;
}