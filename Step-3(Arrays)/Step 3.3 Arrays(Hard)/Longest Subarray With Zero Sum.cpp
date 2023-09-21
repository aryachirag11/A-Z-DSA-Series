#include <bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr)
{
  // Write your code here.
  int n = arr.size();
  int maxLen = 0;
  unordered_map<int, int> mp;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum == 0)
      maxLen = i + 1;
    else
    {
      if (mp.find(sum) != mp.end())
        maxLen = max(maxLen, i - mp[sum]);
      else
        mp[sum] = i;
    }
  }
  return maxLen;
}

int main()
{
  return 0;
}