#include <iostream>
using namespace std;
int Fibo(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return Fibo(n - 1) + Fibo(n - 2);
  }
}
int main()
{
  int num;
  cout << "\nenter number: ";
  cin >> num;
  int result = Fibo(num);
  cout << "\n"
       << num << "th term of fibonacci series is : " << result << endl;

  return 0;
}