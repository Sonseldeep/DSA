#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  int num;
  cout << "\nenter the number: ";
  cin >> num;

  int count = 0;

  for (int i = 1; i <= num; i++)
  {

    if (num % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    cout << "\n prime\n";
  }
  else
  {
    cout << "\n not prime\n";
  }

  return 0;
}