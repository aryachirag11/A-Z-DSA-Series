#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
  int n = nums.size();
  int i = 0;

  for (int j = 1; j < n; j++)
  {
    if (nums[i] != nums[j])
    {
      nums[i + 1] = nums[j];
      i++;
    }
  }
  return i + 1;
}
int main()
{
  return 0;
}