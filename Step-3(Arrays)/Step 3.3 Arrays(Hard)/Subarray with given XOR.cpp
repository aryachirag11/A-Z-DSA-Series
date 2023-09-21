#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B)
{
  int n = A.size();
  int ansCnt = 0;
  int xorr = 0;
  map<int, int> mp;
  mp[xorr]++;

  for (int i = 0; i < n; i++)
  {
    xorr = xorr ^ A[i];
    int x = xorr ^ B;
    ansCnt += mp[x];
    mp[xorr]++;
  }
  return ansCnt;
}

int main()
{
  return 0;
}