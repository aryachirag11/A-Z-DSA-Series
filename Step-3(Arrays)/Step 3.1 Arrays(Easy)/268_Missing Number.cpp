#include <iostream>
#include <vector>
using namespace std;

// Brute force
int missingNumber1(vector<int> &nums)
{
  int n = nums.size();
  for (int i = 0; i <= n; i++)
  {
    int flag = 0;
    for (int j = 0; j < n; j++)
    {
      if (nums[j] == i)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      return i;
    }
  }
  return -1;
}

// better solution
int missingNumber2(vector<int> &nums)
{
  int n = nums.size();
  vector<int> hash(n + 1, 0);

  for (int i = 0; i < n; i++)
  {
    hash[nums[i]]++;
  }

  for (int i = 0; i < n + 1; i++)
  {
    if (hash[i] == 0)
      return i;
  }
  return -1;
}

// optimal solution
int missingNumber3(vector<int> &nums)
{
  int n = nums.size();
  int nSum = (n * (n + 1)) / 2;
  int numsSum = 0;
  for (int i = 0; i < n; i++)
  {
    numsSum += nums[i];
  }
  return nSum - numsSum;
}

// optimal Solution
int missingNumber4(vector<int> &nums)
{
  int n = nums.size();
  int xor1 = 0, xor2 = 0;
  for (int i = 1; i <= n; i++)
  {
    xor1 = xor1 ^ i;
  }
  for (int i = 0; i < n; i++)
  {
    xor2 = xor2 ^ nums[i];
  }
  return xor1 ^ xor2;
}
int main()
{
  return 0;
}