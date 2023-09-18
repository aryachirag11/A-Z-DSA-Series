#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowNum)
{
  int ele = 1;
  vector<int> row;
  row.push_back(ele);
  for (int col = 1; col < rowNum; col++)
  {
    ele *= (rowNum - col);
    ele /= col;
    row.push_back(ele);
  }
  return row;
}

vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> triangle;
  for (int i = 1; i <= numRows; i++)
    triangle.push_back(getRow(i));

  return triangle;
}

int main()
{
  return 0;
}