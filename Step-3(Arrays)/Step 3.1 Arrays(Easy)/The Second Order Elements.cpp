#include <iostream>
using namespace std;
#include <vector>

int secondLargest(int n, vector<int> a)
{
  int largest = a[0];
  int slargest = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > largest)
    {
      slargest = largest;
      largest = a[i];
    }
    else if (a[i] < largest && a[i] > slargest)
      slargest = a[i];
  }
  return slargest;
}
int secondSmallest(int n, vector<int> a)
{
  int smallest = a[0];
  int ssmallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < smallest)
    {
      ssmallest = smallest;
      smallest = a[i];
    }
    else if (a[i] != smallest && a[i] < ssmallest)
      ssmallest = a[i];
  }
  return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
  // Write your code here.
  int slargest = secondLargest(n, a);
  int ssmallest = secondSmallest(n, a);
  return {slargest, ssmallest};
}

int main()
{
  return 0;
}