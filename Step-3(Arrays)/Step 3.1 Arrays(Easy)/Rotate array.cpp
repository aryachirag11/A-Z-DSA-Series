// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate1(int arr[], int n, int k)
{
  k = k % n;
  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = k; i < n; i++)
  {
    arr[i - k] = arr[i];
  }
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - (n - k)];
  }
}

void leftRotate2(int arr[], int n, int k)
{
  reverse(arr, arr + k);
  reverse(arr + k, arr + n);
  reverse(arr, arr + n);
}

int main()
{
  // Write your code here
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int k;
  cin >> k;
  leftRotate(arr, n, k);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}