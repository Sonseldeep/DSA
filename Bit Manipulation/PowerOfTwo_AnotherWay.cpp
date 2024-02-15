#include <iostream>
using namespace std;
int main()
{
  cout << "------------------------------------------------" << endl;
  int n;
  cout << "Enter the number: ";
  cin >> n;

  if ((n & n - 1) == 0 && (n > 0))
  {
    cout << "\nPower of Two" << endl;
  }

  else
  {
    cout << "\nNot Power of Two" << endl;
  }
  cout << "------------------------------------------------" << endl;
}