#include <iostream>
#include <vector>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
  // Write your code here.
  int n = a.size();
  vector<int> leaders;
  int leader = a[n - 1];
  leaders.push_back(leader);
  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i] > leader)
    {
      leaders.push_back(a[i]);
      leader = a[i];
    }
  }

  return leaders;
}

int main()
{
  return 0;
}