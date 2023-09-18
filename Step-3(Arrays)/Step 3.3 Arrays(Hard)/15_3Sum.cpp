#include <bits/stdc++.h>
using namespace std;

// brute force
vector<vector<int>> threeSum1(vector<int> &nums)
{
  int n = nums.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (nums[i] + nums[j] + nums[k] == 0)
        {
          vector<int> temp = {nums[i], nums[j], nums[k]};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
      }
    }
  }
  // vector<vector<int>> ans = {st.begin(), st.end()};
  return {st.begin(), st.end()};
}

// better solution
vector<vector<int>> threeSum2(vector<int> &nums)
{
  int n = nums.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
    set<int> hash;
    for (int j = i + 1; j < n; j++)
    {
      int third = -(nums[i] + nums[j]);
      if (hash.find(third) != hash.end())
      {
        vector<int> temp = {nums[i], nums[j], third};
        sort(temp.begin(), temp.end());
        st.insert(temp);
      }
      hash.insert(nums[j]);
    }
  }
  // vector<vector<int>> ans = {st.begin(), st.end()};
  return {st.begin(), st.end()};
}

// optimal solution
vector<vector<int>> threeSum3(vector<int> &nums)
{
  int n = nums.size();
  vector<vector<int>> triplets;

  sort(nums.begin(), nums.end());

  for (int low = 0; low < n - 2; low++)
  {

    if (low > 0 && nums[low] == nums[low - 1])
      continue;

    int mid = low + 1;
    int high = n - 1;

    while (mid < high)
    {
      int sum = nums[low] + nums[mid] + nums[high];

      if (sum == 0)
      {

        triplets.push_back({nums[low], nums[mid], nums[high]});
        mid++;
        high--;
        while (mid < high && nums[mid] == nums[mid - 1])
          mid++;
        while (mid < high && nums[high] == nums[high + 1])
          high--;
      }

      else if (sum < 0)
        mid++;

      else
        high--;
    }
  }
  return triplets;
}

int main()
{
  return 0;
}