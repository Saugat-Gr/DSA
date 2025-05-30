#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bruteForce(vector<int> arr, int target)
{

  int index = 1;

  vector<int> indexes;

  for (int i = 0; i < arr.size(); ++i)
  {

    for (int j = i; j < arr.size(); ++j)
    {

      if (arr[j] + arr[i] == target)
      {
        indexes.push_back(i);
        indexes.push_back(j);
        return indexes;
      }
    }
  }
  return indexes;
}

// Optimal Soln tech:

vector<int> optimalSol(vector<int> arr, int target)
{

  //  Step 1: Sort the array...
  for (int i = 0; i < arr.size(); ++i)
  {
    for (int j = i + 1; j < arr.size(); ++j)
    {
      if (arr[i] > arr[j])
      {
        swap(arr[i], arr[j]);
      }
    }
  }

  //  Step 2: Take two pointers:
  int p1 = 0;
  int size = arr.size();
  int p2 = size - 1;

  vector<int> indexes;

  while (p1 < p2)
  {

    int sum = arr[p1] + arr[p2];

    //  If sum is greater means the larger pointer value is unnecessary
    if (sum > target)
    {
      --p2;
    }
    //  If sum is less means the smaller pointer value is unnecessary
    else if (sum < target)
    {
      ++p1;
    }
    else if (sum == target)
    {
      indexes.push_back(p1);
      indexes.push_back(p2);
      return indexes;
    }
  }
}

int main()
{

  // Brute Force Approach:
  vector<int> arr = {2, 7, 11, 15};
  int target = 10;

  vector<int> ans = bruteForce(arr, target);

  // cout << ans[0] << ", " << ans[1] << endl;

  // Optimal Solution of the Brute Force Tech:

  vector<int> arr2 = {5, 2, 3, 4, 5};

  vector<int> ans2 = optimalSol(arr2, target);

  cout << ans2[0] << ", " << ans2[1] << endl;

  return 0;
}