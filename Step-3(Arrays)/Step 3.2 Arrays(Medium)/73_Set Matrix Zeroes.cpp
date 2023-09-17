#include <bits/stdc++.h>
using namespace std;

void setZeroes1(vector<vector<int>> &matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();

  vector<int> rowArr(m, 0);
  vector<int> colArr(n, 0);

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] == 0)
      {
        rowArr[i] = 1;
        colArr[j] = 1;
      }
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (rowArr[i] == 1 || colArr[j] == 1)
        matrix[i][j] = 0;
    }
  }
}

void setZeroes2(vector<vector<int>> &matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  int col0 = 1; // track the 0th col

  // mark the rows and cols of 0 cell
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] == 0)
      {
        matrix[i][0] = 0;
        if (j != 0)
          matrix[0][j] = 0;
        else
          col0 = 0;
      }
    }
  }

  // make cell 0s for the marked rows and cols except the track keeping row and col
  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (matrix[i][j] != 0)
      {
        if (matrix[i][0] == 0 || matrix[0][j] == 0)
          matrix[i][j] = 0;
      }
    }
  }
  // checking for 0th row
  if (matrix[0][0] == 0)
  {
    for (int j = 0; j < n; j++)
      matrix[0][j] = 0;
  }
  // checking for 0th col
  if (col0 == 0)
  {
    for (int i = 0; i < m; i++)
      matrix[i][0] = 0;
  }
}

int main()
{
  return 0;
}