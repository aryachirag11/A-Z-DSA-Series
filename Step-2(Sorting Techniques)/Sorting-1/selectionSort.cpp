// Selectrion Sort : Select the minimum and  swap it.
//  After each iteration minimun value comes to the start of the array.
//  After each iteration find the minimum and swap in the remaing array.
//

#include <iostream>
#include <vector>
using namespace std;

// function for selection sort
void selectionSort(vector<int> &arr, int n)
{
  // outer loop
  for (int i = 0; i <= n - 2; i++)
  {
    int minIndex = i;
    // inner loop to find minimum element
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }
    // swap minimum with starting index of selected array
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
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
  selectionSort(arr, n);

  // printing the sorted array
  cout << endl
       << "Sorted array : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}