#include <iostream>
using namespace std;

/*

  Subarray: Continous part of an array is it's sub-array.
  Total Sub-array in an array:  (n * (n+1) )/2

  Brute Force Technique..


   Task 1: Print all the sub-array...

   Task 2: Brute Force Technique Application

   Task 3: Kadane's Algorithm and it's intution and it's main logic,

   Know about edge and corner cases,


*/

int main()
{

  int tSum = 0;

  //  First Brut Force Approach:

  cout << "Brute Force Approach." << endl;

  int arr[5] = {1, 2, 3, 4, 5};

  for (int st = 0; st < 5; ++st)
  {

    for (int end = st; end < 5; ++end)
    {

      for (int k = st; k <= end; ++k)
      {

        cout << arr[k];
      }
      cout << " ";
    }
    cout << endl;
  }

  cout << "Kadane's Algorithm: " << endl;

  int arr1[7] = {3, -4, 5, 4, -1, 7, -8};

  int maxSum = arr1[0];
  int currSum = 0;

  for (int i = 0; i < 7; ++i)
  {

    currSum += arr1[i];

    maxSum = max(maxSum, currSum);

    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  cout << maxSum;

  return 0;
}