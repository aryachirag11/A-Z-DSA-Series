#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Hashing
int majorityElement1(vector<int> &nums)
{
  int n = nums.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
    mp[nums[i]]++;
  for (auto it : mp)
  {
    if (it.second > (n / 2))
      return it.first;
  }
  return -1;
}

// Moore's Voting Algo
int majorityElement(vector<int> &nums)
{
  int n = nums.size();
  int majEle, cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (cnt == 0)
    {
      majEle = nums[i];
      cnt++;
    }
    else if (nums[i] == majEle)
      cnt++;
    else
      cnt--;
  }
  int new_cnt = 0;
  for (int i = 0; i < n; i++)
    if (nums[i] == majEle)
      new_cnt++;
  if (new_cnt > (n / 2))
    return majEle;
  else
    return -1;
}

int main()
{
  return 0;
}