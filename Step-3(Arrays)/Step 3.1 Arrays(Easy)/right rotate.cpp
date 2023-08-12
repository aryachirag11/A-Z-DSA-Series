#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &nums, int k)
{
  int n = nums.size();
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;

  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
}
int main()
{
  return 0;
}