// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  cout << "enter number: ";
  cin >> num;

  bool flag = true;
  for (int i = 2; i <= sqrt(num); i++)
  {
    if ((num % i) == 0)
    {
      flag = false;
      break;
    }
  }
  if (!flag)
  {
    cout << "Not prime\n";
  }
  else
  {
    cout << "Prime\n";
  }
  return 0;
}