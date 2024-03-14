#include <iostream>
using namespace std;

int top = -1;
const int N = 5;
int stack[N];

void push()
{

  int number;
  cout << "\nenter the number to push in the stack: ";
  cin >> number;

  if (top == N - 1)
  {
    cout << "\nOverflow case\n";
    return;
  }

  else
  {

    top++;
    stack[top] = number;
  }
}

int main()
{

  push();

  return 0;
}
