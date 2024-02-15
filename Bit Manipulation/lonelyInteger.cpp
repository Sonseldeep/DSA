#include <iostream>
using namespace std;
int main()
{
  cout << "\n---------------------Lonely Integer---------------------" << endl;
  int arr[] = {1, 2, 3, 4, 3, 2, 1};
  int len = sizeof(arr) / sizeof(arr[0]);
  int ans = 0;

  for (int i = 0; i <= len - 1; i++)
  {
    ans = ans ^ arr[i];
  }
  cout << "\nUnique Element is : " << ans << endl;
  cout << "\n--------------------------------------------------------" << endl;

  return 0;
}