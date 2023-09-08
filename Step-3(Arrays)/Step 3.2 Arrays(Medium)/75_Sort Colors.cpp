#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
  int n = nums.size();
  int low = 0, mid = 0, high = n - 1;
  while (mid <= high)
  {
    if (nums[mid] == 0)
    {
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    }
    else if (nums[mid] == 1)
      mid++;
    else
    {
      swap(nums[high], nums[mid]);
      high--;
    }
  }
}
int main()
{
  return 0;
}