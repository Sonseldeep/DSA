#include <iostream>
using namespace std;
const int N = 5;
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{

  if (front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else if (((rear + 1) % N) == front)
  {
    cout << "\nQueue if full\n";
  }
  else
  {
    rear = (rear + 1) % N;
    queue[rear] = x;
  }
}
void dequeue()
{

  if (front == -1 && rear == -1)
  {
    cout << "\nQueue is empty\n";
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    cout << "dequeued element is: " << queue[front] << endl;
    front = (front + 1) % N;
  }
}

void Display()
{
  int i = front;
  if (front == -1 && rear == -1)
  {
    cout << "\nQueue is Empty\n";
  }
  else
  {
    while (i != rear)
    {
      cout << queue[i] << " ";
      i = (i + 1) % N;
    }
    cout << queue[rear];
  }
}
int main()
{

  enqueue(1);
  enqueue(2);

  enqueue(3);

  enqueue(4);

  Display();
  cout << "\nAfter dequeueing\n";
  dequeue();
  Display();

  return 0;
}