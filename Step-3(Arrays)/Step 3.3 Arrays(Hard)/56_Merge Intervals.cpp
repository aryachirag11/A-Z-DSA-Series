#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals)
  {
    int n = intervals.size();
    vector<int> prev(2, -1);
    sort(intervals.begin(), intervals.end());
    int index = 0;

    for (int i = 0; i < n; i++)
    {
      if (prev[0] == -1)
      {
        prev = intervals[i];
        intervals[index] = prev;
      }
      else if (intervals[i][0] > prev[1])
      {
        prev = intervals[i];
        intervals[++index] = prev;
      }
      else
      {
        prev[1] = max(prev[1], intervals[i][1]);
        intervals[index] = prev;
      }
    }
    return {intervals.begin(), intervals.begin() + index + 1};
  }
};

int main()
{
  return 0;
}