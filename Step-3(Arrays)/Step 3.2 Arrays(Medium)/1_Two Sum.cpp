#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  int n = nums.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    if (mp.find(target - nums[i]) != mp.end())
      return {mp[target - nums[i]], i};
    mp[nums[i]] = i;
  }
  return {-1, -1};
}
int main()
{
  return 0;
}