#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubarrayWithSumK1(vector<int> a, long long k)
{
  int n = a.size();
  long long pre_Sum = 0;
  int maxLen = 0;

  map<long long, int> preMap;

  for (int i = 0; i < n; i++)
  {
    pre_Sum += a[i];
    if (pre_Sum == k)
      maxLen = max(maxLen, i + 1);
    long long rem = pre_Sum - k;
    if (preMap.find(rem) != preMap.end())
    {
      int len = (i - preMap[rem]);
      maxLen = max(maxLen, len);
    }
    if (preMap.find(pre_Sum) == preMap.end())
      preMap[pre_Sum] = i;
  }
  return maxLen;
}

int longestSubarrayWithSumK2(vector<int> a, long long k)
{
  // Write your code here
  int n = a.size();
  int left = 0;
  int right = 0;
  long long sum = a[0];
  int ans = 0;

  while (right < n)
  {
    while (left <= right && sum > k)
    {
      sum -= a[left];
      left++;
    }
    if (sum == k)
    {
      ans = max(ans, right - left + 1);
    }

    right++;
    if (right < n)
    {
      sum += a[right];
    }
  }
  return ans;
}

int main()
{
  return 0;
}