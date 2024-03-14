#include <iostream>
using namespace std;

int UpperBound(int arr[], int num, int target)
{

  int low = 0;
  int high = num - 1;
  int answer = num;

  while (low <= high)
  {

    int mid = low + (high - low) / 2;
    if (arr[mid] > target)
    {
      answer = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  // return arr[answer]; returns the value
  return answer; // returns the index of upper bound
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 6;
  int num = 9;
  int result = UpperBound(arr, num, target);
  cout << "The upper bound of the number " << target << " is at index  " << result << endl;

  return 0;
}