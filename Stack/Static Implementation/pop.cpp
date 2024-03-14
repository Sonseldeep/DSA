
#include <iostream>
using namespace std;

int top = -1;
const int N = 5;
int stack[N];

void pop()
{
  int item;

  if (top == -1)
  {
    cout << "\nStack is empty\n";
  }

  else
  {
    item = stack[top];
    top--;
    cout << "\nPopped element is " << item << endl;
  }
}
int main()
{

  pop();
  return 0;
}
