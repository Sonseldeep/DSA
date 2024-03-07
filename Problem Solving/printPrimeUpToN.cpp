#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  bool flag = true;
  int num;
  cout << "enter upper bound: ";
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    for (int j = 2; j <= sqrt(num); j++)
    {
      if (num % j == 0)
      {
        flag = false;
        break;
      }
      if (flag)
      {
        cout << "the " << i << "th prime is: " << i << endl;
      }
    }
  }
  return 0;
}
