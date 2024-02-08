// insertion at given position with time complexity having O(1) for unsorted array

#include <iostream>
using namespace std;
int main()
{
  int size;
  // int pos = 3;

  cout << "enter the size of array: ";
  cin >> size;
  int arr[size];

  cout << "------------------------" << endl;
  cout << "enter the array of size: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "------------------------" << endl;
  cout << "the array : ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "------------------------" << endl;
  int num;
  cout << "enter the number you want to insert: ";
  cin >> num;
  cout << "------------------------" << endl;

  int pos;
  cout << "enter the position you want to insert: ";
  cin >> pos;

  for (int i = size - 1; i >= pos - 1; i--)
  {
    arr[size] = arr[pos - 1];
  }
  arr[pos - 1] = num;
  // here we just replace the last and number at index only
  // time complexity: O(1)
  // this work for unsorted arrays

  size++;
  cout << "------------------------" << endl;
  cout << "After inserting: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}