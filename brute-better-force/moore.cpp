#include <iostream>
#include <vector>
using namespace std;

int moore(vector<int> arr)
{

  int freq = 0;
  int ans = arr[0];

  for (int val : arr)
  {
    if (freq == 0)
    {
      ans = val;
    }
    else if (val == ans)
    {
      ++freq;
    }
    else if (val != ans)
    {
      --freq;
    }
    return ans;
  }

  //  Exceptinol Case: You have to check the answer with the loop again if there isnot mentioned that answer is defn gonna exist
}

int main()
{

  vector<int> arr = {1, 1, 2, 1, 2, 1};

  int ans = moore(arr);
  cout << ans;

  return 0;
}