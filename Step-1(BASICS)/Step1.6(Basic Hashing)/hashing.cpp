// max array side
// outside main : 10^7
// inside main : 10^6
// for int data types

#include <iostream>
using namespace std;
int main()
{
  // array input
  int n;
  cout << "Enter the size of array(max 100)";
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // precompute
  int hash[100] = {0};
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  // query
  int q;
  cin >> q;
  while (q--)
  {
    int number;
    cin >> number;
    // fetch
    cout << hash[number] << endl;
  }

  return 0;
}
