#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// count frequencies
vector<int> countFrequency(int n, int x, vector<int> &nums)
{

  vector<int> frequncies;
  for (int i = 0; i < n; i++)
  {
    frequncies[nums[i] - 1]++;
  }
  return frequncies;
}

// highest and lowest frequency
vector<int> getFrequncies(vector<int> &v)
{
  unordered_map<int, int> frequencies;
  vector<int> ans;
  for (int i = 0; i < v.size(); i++)
  {
    frequencies[v[i]]++;
  }
  int maxFreq = 0, minFreq = v.size();
  int maxEle = 0, minEle = 0;

  for (auto it : frequencies)
  {
    int count = it.second;
    int element = it.first;

    if (count > maxFreq)
    {
      maxEle = element;
      maxFreq = count;
    }
    if (count < minFreq)
    {
      minEle = element;
      minFreq = count;
    }
  }
  ans.push_back(maxEle);
  ans.push_back(minEle);

  return ans;
}
int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> ans = countFrequency(n, x, v);
  for (auto it : ans)
  {
    cout << ans[it];
  }

  return 0;
}