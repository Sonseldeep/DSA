#include <iostream>
using namespace std;
int main()
{
  int const size = 12;
  int mod[size] = {4, 7, 7, 9, 9, 9, 8, 3, 3, 3, 3, 10};
  int mostFrequent;
  int currentFrequency = 0;
  int highestFrequency = 0;

  for (int i = 0; i < 12; i++)
  {
    currentFrequency++;
    if (i == size - 1 || mod[i] != mod[i + 1])
    {
      if (currentFrequency > highestFrequency)
      {
        highestFrequency = currentFrequency;
        mostFrequent = mod[i];
      }
      currentFrequency = 0;
    }
  }
  cout << "\nmod is " << mostFrequent << "\ncount is : " << highestFrequency << endl;

  return 0;
}