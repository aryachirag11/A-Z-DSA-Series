#include <iostream>
#include <vector>
#include <map>
using namespace std;

// brute solution
int singleNumber1(vector<int> &nums)
{
  int n = nums.size();
  if (n == 1)
    return nums[0];

  for (int i = 0; i < n; i++)
  {
    int cnt = 0;
    int num = nums[i];
    for (int j = 0; j < n; j++)
    {
      if (cnt == 2)
        break;
      if (nums[j] == num)
        cnt++;
    }
    if (cnt == 1)
      return num;
  }
  return 0;
}

// better solution
int singleNumber2(vector<int> &nums)
{
  int n = nums.size();
  if (n == 1)
    return nums[0];

  map<int, int> mp;
  for (int i = 0; i < n; i++)
    mp[nums[i]]++;
  for (auto it : mp)
  {
    if (it.second == 1)
      return it.first;
  }
  return 0;
}

//  optimal force
int singleNumber3(vector<int> &nums)
{
  int n = nums.size();
  if (n == 1)
    return nums[0];

  int ans = 0;
  for (int i = 0; i < n; i++)
    ans = ans ^ nums[i];

  return ans;
}

int main()
{
  return 0;
}