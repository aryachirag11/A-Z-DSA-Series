#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
  int n = nums.size();
  unordered_map<int, int> mp;
  mp[0] = 1;
  int cnt = 0, preSum = 0;

  for (int i = 0; i < n; i++)
  {
    preSum += nums[i];
    cnt += mp[preSum - k];
    mp[preSum]++;
  }
  return cnt;
}

int main()
{
  return 0;
}