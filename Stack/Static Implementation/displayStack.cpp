#include <iostream>
using namespace std;
int top = -1;
const int N = 5;
int stack[N];
void display()
{
  for (int i = top; i >= 0; i--)
  {

    cout << stack[i] << " " << endl;
  }
}
int main()
{

  display();
  return 0;
}