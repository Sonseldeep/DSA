#include <iostream>
using namespace std;
int S[10] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 1};
int top = -1;
int n = 10;
void push(int x)
{
  if (top >= n - 1)
  {
    cout << "overflow\n"
         << endl;
  }
  else
  {
    top++;
    S[top] = x;
    cout << "pushed element is: " << x << endl;
  }
}

int main()
{
  push(10);

  return 0;
}