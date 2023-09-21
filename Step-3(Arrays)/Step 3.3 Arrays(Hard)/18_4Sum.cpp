#include <bits/stdc++.h>
using namespace std;

// sort the array
// fix i and j (k = j + 1, and l at end)
// until j < k
// if sum == target -> (k++,l-- until they are same)
// after iteration move j,(until j is not same as previous)
// after j iteratioin, move i (until i is mot same as previous)
class Solution
{
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    int n = nums.size();
    vector<vector<int>> quadruples;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      for (int j = i + 1; j < n; j++)
      {
        if (j != i + 1 && nums[j] == nums[j - 1])
          continue;
        int low = j + 1;
        int high = n - 1;
        while (low < high)
        {
          long long sum = nums[i];
          sum += nums[j];
          sum += nums[low];
          sum += nums[high];

          if (sum == target)
          {
            quadruples.push_back({nums[i], nums[j], nums[low], nums[high]});
            low++;
            high--;
            while (low < high && nums[low] == nums[low - 1])
              low++;
            while (low < high && nums[high] == nums[high + 1])
              high--;
          }
          else if (sum < target)
            low++;
          else
            high--;
        }
      }
    }
    return quadruples;
  }
};

int main()
{
  return 0;
}