#include <iostream>
using namespace std;
int BInarySearchRecursive(int arr[], int low, int high, int target)
{

  while (low <= high)
  {
    int mid = low + (high - low) / 2; // to overcome the integer overflow;

    if (target == arr[mid])
    {
      return mid;
    }

    else if (target > arr[mid])
    {
      return BInarySearchRecursive(arr, mid + 1, high, target);
    }

    else
    {
      return BInarySearchRecursive(arr, low, mid - 1, target);
    }
  }
  return -1;
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int num = 9;
  int target = 6;
  int low = 0;
  int high = num - 1;
  int result = BInarySearchRecursive(arr, low, high, target);
  cout << "The element is present at index: " << result;

  return 0;
}