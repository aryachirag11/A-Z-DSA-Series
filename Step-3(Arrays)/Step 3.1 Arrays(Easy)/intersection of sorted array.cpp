#include <iostream>
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
  // Write your code here.
  vector<int> ans;
  int i = 0;
  int j = 0;

  while (i < n && j < m)
  {
    if (arr1[i] == arr2[j])
    {
      ans.push_back(arr1[i]);
      i++;
      j++;
      // arr2[j] = -1;
    }
    else if (arr1[i] < arr2[j])
      i++;
    else if (arr1[i] > arr2[j])
      j++;
  }
  return ans;
}
int main()
{
  return 0;
}