
// P1 -> Summation of first N numbers uisng:
//       1. parameterized way
//       2. functional call
// P2 -> Factorial of a number
#include <iostream>
using namespace std;

// parameterized way
void print_N_sum(int i, int sum)
{
  if (i < 1)
  {
    cout << "SUM : " << sum << endl;
    return;
  }
  print_N_sum(i - 1, sum + i);
}

// function way
int print_N_sum2(int n)
{
  if (n == 0)
    return 0;
  return n + print_N_sum2(n - 1);
}

// factorial of a number
long long fact(int n)
{
  if (n == 0)
    return 1;
  return n * (fact(n - 1));
}

int main()
{
  int n;
  cout << "Enter N : ";
  cin >> n;
  // print_N_sum(n, 0);
  // cout << "SUM : " << print_N_sum2(n);
  cout << "FACTORAL OF " << n << " = " << fact(n);
  return 0;
}