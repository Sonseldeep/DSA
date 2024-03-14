#include <iostream>
using namespace std;

int binarySearch(int arr[], int num, int target)
{

  int low = 0;
  int high = num - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (target > arr[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int num = 7;
  int target = 1;
  int result = binarySearch(arr, num, target);
  cout << "result is at index  " << result << endl;

  return 0;
}