#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSubArray(vector<int> v)
{
  int start = 0, ansStart = -1, ansEnd = -1, sum = 0;
  int maxi = INT_MIN;
  for (int i = 0; i < v.size(); i++)
  {
    if (sum == 0)
      start = i;
    sum += v[i];
    if (sum > maxi)
    {
      maxi = sum;
      ansStart = start;
      ansEnd = i;
    }
    if (sum < 0)
      sum = 0;
  }
  return {v.begin() + ansStart, v.begin() + ansEnd + 1};
}

int main()
{
  vector<int> v = {1};
  vector<int> ans = maxSubArray(v);
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  return 0;
}