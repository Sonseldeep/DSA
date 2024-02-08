// by swapping, shifting toward the right
// this algo. takes time complexity:  O(n)
// generally depends on the position
// hence complexity can be improved as O(n-p);
#include <iostream>
using namespace std;
int main()
{
  int size;

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
  if (pos <= 0 || pos > size)
  {
    cout << "invalid position : ( " << endl;
  }
  else
  {
    for (int i = size - 1; i >= pos; i--)
    {
      arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size++;
  }
  cout << "After insertion: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}