#include <iostream>
using namespace std;

int lowerBound(int arr[], int num, int target)
{
  int low = 0;
  int high = num - 1;

  int answer = num;

  while (low <= high)
  {
    int mid = (low + high);
    if (arr[mid] >= target)
    {
      answer = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return answer;
}
int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int num = 9;
  int target = 3;
  int result = lowerBound(arr, num, target);
  cout << "the lower bound of " << target << " is " << result << endl;
  return 0;
}