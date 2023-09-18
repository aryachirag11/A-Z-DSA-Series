#include <bits/stdc++.h>
using namespace std;

// brute force
vector<int> majorityElement1(vector<int> &nums)
{
  int n = nums.size();
  vector<int> majorEles;
  for (int i = 0; i < n; i++)
  {
    if (majorEles.size() == 0 || majorEles[0] != nums[i])
    {
      int cnt = 0;
      for (int j = 0; j < n; j++)
      {
        if (nums[j] == nums[i])
          cnt++;
      }
      if (cnt > (n / 3))
        majorEles.push_back(nums[i]);
    }
    if (majorEles.size() == 2)
      break;
  }
  return majorEles;
}

// better solution
vector<int> majorityElement2(vector<int> &nums)
{
  int n = nums.size();
  vector<int> majorEles;
  map<int, int> hash;
  for (int i = 0; i < n; i++)
  {
    hash[nums[i]]++;

    if (hash[nums[i]] == (n / 3) + 1)
      majorEles.push_back(nums[i]);

    if (majorEles.size() == 2)
      break;
  }
  return majorEles;
}

// optimal solution
vector<int> majorityElement3(vector<int> &nums)
{
  int n = nums.size();
  vector<int> majorEles;
  int cnt1 = 0, cnt2 = 0;
  int ele1 = INT_MIN, ele2 = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (cnt1 == 0 && nums[i] != ele2)
    {
      ele1 = nums[i];
      cnt1 = 1;
    }
    else if (cnt2 == 0 && nums[i] != ele1)
    {
      ele2 = nums[i];
      cnt2 = 1;
    }
    else if (nums[i] == ele1)
      cnt1++;
    else if (nums[i] == ele2)
      cnt2++;
    else
    {
      cnt1--;
      cnt2--;
    }
  }
  cnt1 = 0;
  cnt2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == ele1)
      cnt1++;
    if (nums[i] == ele2)
      cnt2++;
  }
  int mini = (int)(n / 3) + 1;
  if (cnt1 >= mini)
    majorEles.push_back(ele1);
  if (cnt2 >= mini)
    majorEles.push_back(ele2);
  return majorEles;
}

int main()
{
  return 0;
}