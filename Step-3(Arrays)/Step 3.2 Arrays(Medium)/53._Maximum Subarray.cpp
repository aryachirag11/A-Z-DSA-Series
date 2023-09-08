#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
  int n = nums.size();
  int sum = 0;
  int maxSubArraySum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    sum += nums[i];
    maxSubArraySum = max(maxSubArraySum, sum);
    if (sum < 0)
      sum = 0;
  }
  return maxSubArraySum;
}

int main()
{
  return 0;
}