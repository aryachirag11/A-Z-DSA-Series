#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros1(int n, vector<int> a)
{
  // Write your code here.
  vector<int> temp;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      temp.push_back(a[i]);
    }
  }
  for (int i = 0; i < temp.size(); i++)
  {
    a[i] = temp[i];
  }
  for (int i = temp.size(); i < n; i++)
  {
    a[i] = 0;
  }
  return a;
}

int main()
{
  return 0;
}