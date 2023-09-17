#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
  int n = nums.size();
  if (n == 0)
    return 0;

  unordered_set<int> st;
  int longest = 1;

  for (int i = 0; i < n; i++)
    st.insert(nums[i]);

  for (auto it : st)
  {
    if (st.count(it - 1) == 0)
    {
      int cnt = 1;

      int x = it;
      while (st.count(x + 1))
      {
        cnt += 1;
        x += 1;
      }
      longest = max(longest, cnt);
    }
  }
  return longest;
}

int main()
{
  return 0;
}