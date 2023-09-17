#include <iostream>
using namespace std;
void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }
}
void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }
}
void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j
           << " ";
    }
    cout << endl;
  }
}
void pattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i
           << " ";
    }
    cout << endl;
  }
}
void pattern5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i + 1; j++)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }
}
void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i + 1; j++)
    {
      cout << i
           << " ";
    }
    cout << endl;
  }
}
void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // stars

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern9(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern10(int n)
{
  for (int i = 1; i <= (2 * n) - 1; i++)
  {
    int stars = i;
    if (i > n)
    {
      stars = (2 * n) - i;
    }
    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern11(int n)
{
  int start = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      start = 1;
    }
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}
void pattern12(int n)
{
  for (int i = 1; i <= n; i++)
  { // numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // space
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << " ";
    }
    // numbers
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }
}
void pattern13(int n)
{
  int count = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << count++ << " ";
    }
    cout << endl;
  }
}
void pattern14(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A';
    for (int j = 0; j <= i; j++)
    {
      cout << ch++;
    }
    cout << endl;
  }
}
void pattern15(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A';
    for (int j = 0; j < n - i; j++)
    {
      cout << ch++;
    }
    cout << endl;
  }
}
void pattern16(int n)
{
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      cout << ch;
    }
    ch++;
    cout << endl;
  }
}
void pattern17(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char ch1 = 'A';
    // space
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    // letters
    for (int j = 1; j <= (2 * i) - 1; j++)
    {
      if (j < i)
      {
        cout << ch1++;
      }
      else
      {
        cout << ch1--;
      }
    }
    cout << endl;
  }
}
void pattern18(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + (n - 1);
    for (int j = 0; j <= i; j++)
    {
      cout << ch--;
    }
    cout << endl;
  }
}
void pattern19(int n)
{ // upper triangle
  for (int i = 0; i < n; i++)
  { // stars
    for (int j = 1; j <= n - i; j++)
    {
      cout << "*";
    }
    // spaces
    for (int j = 0; j < 2 * i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // lower triangle
  for (int i = 1; i <= n; i++)
  {
    // stars
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    // spaces
    for (int j = 0; j < 2 * (n - i); j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern20(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (i == 1 || i == n)
    {
      for (int j = 1; j <= n; j++)
      {
        cout << "*";
      }
    }
    else
    {
      cout << "*";
      for (int j = 0; j < n - 2; j++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
}
void pattern21(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    // stars
    int stars = i;
    int space = 2 * (n - i);
    if (i > n)
    {
      stars = 2 * n - i;
      space = 2 * (i - n);
    }
    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }

    // space
    for (int j = 0; j < space; j++)
    {
      cout << " ";
    }

    // stars
    for (int j = 0; j < stars; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}
void pattern22(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int left = j;
      int top = i;
      int right = (2 * n - 2) - j;
      int bottom = (2 * n - 2) - i;
      cout << (n - min(min(left, top), min(right, bottom)));
    }
    cout << endl;
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  cout << "Array intiliased!" << endl;
  arr[0] = 1;
  arr[4] = 2;
  cout << arr[0] << " " << arr[4];
  // pattern22(n);

  return 0;
}