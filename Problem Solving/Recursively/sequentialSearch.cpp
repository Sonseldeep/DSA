#include <iostream>
using namespace std;
int main()
{
  const int size = 10;
  int numbers[size] = {9, 2, 0, 4, 6, 7, 11, -1};
  int target = 11;
  int targetPos = 0;

  while ((numbers[targetPos] != target) && (targetPos < size))
  {

    targetPos++;
  }
  cout << "Target Position is at index  " << targetPos << endl;

  return 0;
}