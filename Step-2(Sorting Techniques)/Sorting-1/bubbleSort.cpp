// push the maximum element to the last by ajacent swapping
// kind of opposite to selection sort

#include <iostream>
#include <vector>
using namespace std;

// fucntion
void bubbleSort(vector<int> &arr, int n)
{ // outer loop to iterate over the unsorted part
  for (int i = n - 1; i >= 0; i--)
  {
    bool didSwap = false;
    // inner loop to push the maximum element to the last by ajacent swaps
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        didSwap = true;
      }
    }
    if (didSwap == false)
      break;
  }
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  vector<int> arr(n);

  // array input
  cout << "Enter " << n << " elements(with space seperated) : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // fucntion call
  bubbleSort(arr, n);

  // printing the sorted array
  cout << endl
       << "Sorted array : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
  return 0;
}