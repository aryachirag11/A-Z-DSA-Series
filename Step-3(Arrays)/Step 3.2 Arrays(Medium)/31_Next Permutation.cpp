#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{
  int n = nums.size();
  int ind = -1;
  // Step 1: Find the breakpoint in the current permutation
  for (int i = n - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      ind = i;
      break;
    }
  }

  // Cheking if current permutation is the last permutation
  if (ind == -1)
  {
    reverse(nums.begin(), nums.end());
    return;
  }

  // Step 2 : Finding the next greater element than breaking point in the right half
  for (int i = n - 1; i > ind; i--)
  {
    if (nums[i] > nums[ind])
    {
      swap(nums[i], nums[ind]);
      break;
    }
  }

  // Step 3: Rearranging the right half to get next permutation
  reverse(nums.begin() + ind + 1, nums.end());
}

int main()
{
  return 0;
}