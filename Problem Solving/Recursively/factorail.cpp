#include <iostream>
using namespace std;
int fact(int n)
{
  int factorial = 1;
  for (int i = 1; i <= n; ++i)
  {
    factorial *= i;
  }
  return factorial;
}
int main()
{
  int num;
  cout << "\nenter the number: ";
  cin >> num;
  int result = fact(num);
  cout << "\nThe " << num << "! is: " << result << endl;

  return 0;
}