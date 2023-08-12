#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
  // Write your code here
  int n1 = a.size();
  int n2 = b.size();
  vector<int> unionArr;
  int i = 0;
  int j = 0;

  while (i < n1 && j < n2)
  {
    if (a[i] <= b[j])
    {
      if (unionArr.size() == 0 || unionArr.back() != a[i])
      {
        unionArr.push_back(a[i]);
      }
      i++;
    }
    else
    {
      if (unionArr.size() == 0 || unionArr.back() != b[j])
      {
        unionArr.push_back(b[j]);
      }
      j++;
    }
  }
  while (i < n1)
  {
    if (unionArr.size() == 0 || unionArr.back() != a[i])
    {
      unionArr.push_back(a[i]);
    }
    i++;
  }
  while (j < n2)
  {
    if (unionArr.size() == 0 || unionArr.back() != b[j])
    {
      unionArr.push_back(b[j]);
    }
    j++;
  }
  return unionArr;
}
int main()
{
  return 0;
}