#include <iostream>
using namespace std;

int top = -1;
const int N = 5;
int stack[N];

void Push()
{
  int data;
  cout << "\n enter data : ";
  cin >> data;

  if (top == N - 1)
  {
    cout << "\nStack Overflow\n";
    return;
  }
  else
  {
    top++;
    stack[top] = data;
  }
}

void Pop()
{
  int item;
  if (top == -1)
  {
    cout << "\nStack Underflow\n";
    return;
  }
  else
  {
    item = stack[top];
    top--;
    cout << "\nPopped item is: " << item << endl;
  }
}

void PeekElement()
{
  if (top == -1)
  {
    cout << "\nStack Underflow\n";
    return;
  }
  else
  {
    cout << "\nTop element is: " << stack[top] << endl;
  }
}

void Display()
{
  if (top == -1)
  {
    cout << "\nStack Underflow\n";
    return;
  }
  else
  {
    for (int i = top; i >= 0; i--)
    {
      cout << stack[i] << " ";
    }
  }
}

int main()
{
  int choice;

  while (choice != 0)
  {
    cout << "\n----------------------------------ADT STACK OPERATION------------------------------------------------\n";
    cout << "\nenter the choices\n 1---> push\n 2--->pop\n 3--->peek\n 4--->display\n 0--->exit\n";
    cout << "\n-------------------------------------------------------------------------------------------------\n";

    cout << "\nenter Numbers: ";

    cin >> choice;
    switch (choice)
    {
    case 0:
      exit(0);
      break;

    case 1:
      Push();
      break;

    case 2:
      Pop();
      break;

    case 3:
      PeekElement();
      break;

    case 4:
      Display();
      break;

    default:
      cout << "\nInvalid Input\n";
    }
  }

  return 0;
}