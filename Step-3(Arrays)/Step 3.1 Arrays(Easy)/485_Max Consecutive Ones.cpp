#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
  int n = nums.size();
  if (n == 1)
  {
    if (nums[0] == 1)
      return 1;
    else
      return 0;
  }
  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == 1)
      cnt++;
    else
      cnt = 0;
    ans = max(ans, cnt);
  }
  return ans;
}
int main()
{
  return 0;
}