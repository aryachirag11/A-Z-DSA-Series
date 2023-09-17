#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
  int m = matrix.size(), n = matrix[0].size();
  vector<int> spiral;

  int cnt = 0, total = m * n;

  int startingRow = 0, startingCol = 0, endingRow = m - 1, endingCol = n - 1;

  while (cnt < total)
  {

    // printing first row :
    for (int i = startingCol; (cnt < total) && (i <= endingCol); i++)
    {
      spiral.push_back(matrix[startingRow][i]);
      cnt++;
    }
    startingRow++;

    // print last col :
    for (int i = startingRow; (cnt < total) && (i <= endingRow); i++)
    {
      spiral.push_back(matrix[i][endingCol]);
      cnt++;
    }
    endingCol--;

    // printing last row :
    for (int i = endingCol; (cnt < total) && (i >= startingCol); i--)
    {
      spiral.push_back(matrix[endingRow][i]);
      cnt++;
    }
    endingRow--;

    // priniting first col :
    for (int i = endingRow; (cnt < total) && (i >= startingRow); i--)
    {
      spiral.push_back(matrix[i][startingCol]);
      cnt++;
    }
    startingCol++;
  }
  return spiral;
}

int main()
{
  return 0;
}