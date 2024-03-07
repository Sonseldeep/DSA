#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num;
  cout << "Enter upper bound: ";
  cin >> num;

  for (int i = 2; i <= num; i++)
  { // Start from 2, as 1 is not prime
    bool flag = true;
    for (int j = 2; j <= sqrt(i); j++)
    { // Check divisibility up to sqrt(i)
      if (i % j == 0)
      {
        flag = false;
        break;
      }
    }
    if (flag)
    {
      cout << "the " << i << "th prime is: " << i << endl;
    }
  }
  return 0;
}
