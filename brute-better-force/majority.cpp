#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
 Approach is to find the largest repeating number.
 Where the number should repeat floor n/2 times,
 n is the total num of elements
*/

int majorityEl(vector<int> arr)
{

  int targetFreq = arr.size() / 2;

  int freq = 0;
  int currEl = arr[0];
  for (int i = 0; i < arr.size(); ++i)
  {

    if (arr[i] == currEl)
    {
      ++freq;
    }
    else
    {

      currEl = arr[i];
      freq = 1;
    }

    if (freq > targetFreq)
    {
      return currEl;
    }
  }
}

int main()
{

  vector<int> arr = {1, 1, 1, 2};

  int ans = majorityEl(arr);

  cout << ans;

  return 0;
}