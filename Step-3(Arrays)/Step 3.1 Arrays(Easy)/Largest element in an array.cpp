#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
  // Write your code here.
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > maxi)
      maxi = arr[i];
  }

  return maxi;
}
int main()
{
  return 0;
}