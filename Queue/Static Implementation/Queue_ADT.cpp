#include <iostream>
using namespace std;
const int N = 5;
int front = -1;
int rear = -1;
int queue[N];

void enqueue(int x)
{

  if (rear == N - 1)
  {
    cout << "Overflow occurs\n";
  }

  else if (front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }

  else
  {
    rear++;
    queue[rear] = x;
  }
}

void Display()
{

  if (front == -1 && rear == -1)
  {
    cout << "\nQueue is Empty\n";
  }
  else
  {
    cout << "\n[ ";
    for (int i = front; i < rear + 1; i++)
    {
      cout << queue[i] << " ";
    }
    cout << "]\n";
  }
}

void Dequeue()
{
  if (front == -1 && rear == -1)
  {
    cout << "\nQueue is Empty\n";
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    cout << "\ndequeued element is " << queue[front] << endl;
    front++;
  }
}

void Peek()
{

  if (front == -1 && rear == -1)
  {
    cout << "\n Queue is empty\n";
  }
  else
  {
    cout << "\nThe peek element is: " << queue[front] << endl;
  }
}

int main()
{
  enqueue(0);
  enqueue(1);
  enqueue(2);
  enqueue(3);
  Peek();
  Dequeue();
  Display();
  Peek();

  return 0;
}