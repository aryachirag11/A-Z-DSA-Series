// P1 -> Reverse an array
// P2 -> Check if string is pallindrome or not
// P3 -> Fibonacci Series

#include <iostream>
#include <string>
using namespace std;

// Reverse an array : using two pointer
void reverse_array(int l, int arr[], int r)
{
  if (l >= r)
    return;
  swap(arr[l], arr[r]);
  reverse_array(l + 1, arr, r - 1);
}

// Reverse an array : using single pointer
void reverse_array2(int i, int arr[], int size)
{
  if (i >= size / 2)
    return;
  swap(arr[i], arr[size - i - 1]);
  reverse_array2(i + 1, arr, size);
}

// check a string is palindrome or not
string isPalindrome(int i, string &str)
{
  if (i >= str.size() / 2)
    return "Palindrome";
  if (str[i] != str[str.size() - i - 1])
    return "Not a palindrome";
  return isPalindrome(i + 1, str);
}
int main()
{
  // int n;
  // cout << "Enter size of array : ";
  // cin >> n;
  // int arr[n];
  // cout << "Enter array elements" << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cout << "arr[" << i << "] = ";
  //   cin >> arr[i];
  // }
  // // reverse_array(0, arr, n - 1);
  // reverse_array2(0, arr, n);
  // cout << endl
  //      << "Reversed Array : " << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cout << "arr[" << i << "] = " << arr[i] << endl;
  // }

  string str;
  cout << "Enter the string in lower or upper case : ";
  cin >> str;
  cout << isPalindrome(0, str);
  return 0;
}