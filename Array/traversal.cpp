#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "-----------------------------" << endl;
  cout << "Enter the size of array: ";
  cin >> n;
  cout << "-----------------------------" << endl;
  int arr[n];
  cout << "Enter elements of array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "-----------------------------" << endl;
  cout << "Arrays are: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "-----------------------------" << endl;

  return 0;
}