#include <iostream>
using namespace std;
int main()
{
  int size;
  cout << "enter the size of array: ";
  cin >> size;

  int arr[size];
  cout << endl
       << "Enter elements of array:" << endl;
  for (int i = 0; i < size; i++)
  {

    cin >> arr[i];
  }
  cout << endl
       << "Display: ";
  for (int j = 0; j < size; j++)
  {

    cout << arr[j] << " ";
  }
  cout<<endl;

  int pos;
  cout << "enter the position you want to delete: ";
  cin >> pos;
  int removedData = arr[pos - 1];

  for (int k = pos - 1; k < size - 1; k++)
  {
    arr[k] = arr[k + 1];
  }

  size--;

  cout << "after deletion: ";
  for (int l = 0; l < size; l++)
  {
    cout << arr[l] << " ";
  }
  cout << endl;
  cout << "deleted one: " << removedData;

  return 0;
}
