// Complexities : O(log n) for storing and fetching
// for unordered map best and average case has O(1) and for worst case it is O(n)
// n is the number of elements in the map data structure
#include <iostream>
#include <map>
using namespace std;
int main()
{
  int n;
  cout << "Enter the size of array:";
  cin >> n;
  int arr[n];
  // array input
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // precompute
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    cin >> mpp[arr[i]]++;
  }

  // query
  int query;
  cout << "Enter number of queries : ";
  cin >> query;
  cout << "Enter " << query << " queries" << endl;
  while (query--)
  {
    int number;
    cin >> number;
    // fetch
    cout << mpp[number] << endl;
  }

  return 0;
}