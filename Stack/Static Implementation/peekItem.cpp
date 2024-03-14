#include <iostream>
using namespace std;

int top = -1;
const int N = 5;
int stack[N];

void peek()
{

  if (top == -1)
  {
    cout << "Empty stack" << endl;
    return;
  }
  else
  {
    cout << "Top element: " << stack[top] << endl;
  }
}

int main()
{

  peek();
  return 0;
}