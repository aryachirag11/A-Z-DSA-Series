#include <iostream>
#include <vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
  // Write your code here.
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == num)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  return 0;
}