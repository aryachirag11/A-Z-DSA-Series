#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProduct(vector<int> &nums)
  {
    int n = nums.size();
    int maxi = INT_MIN;
    int prefixProduct = 1;
    int suffixProduct = 1;
    for (int i = 0; i < n; i++)
    {
      if (prefixProduct == 0)
        prefixProduct = 1;
      if (suffixProduct == 0)
        suffixProduct = 1;

      prefixProduct *= nums[i];
      suffixProduct *= nums[n - i - 1];
      maxi = max(maxi, max(prefixProduct, suffixProduct));
    }
    return maxi;
  }
};

int main()
{
  return 0;
}