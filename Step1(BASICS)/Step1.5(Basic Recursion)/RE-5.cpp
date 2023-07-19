// Fibonacci Series using multiple recurion
// 0 1 1 2 3 5

#include <iostream>
using namespace std;

int fibo_number(int n)
{
  if (n <= 1)
    return n;
  return fibo_number(n - 1) + fibo_number(n - 2);
}
int main()
{
  int n;
  cout << "Enter n : ";
  cin >> n;
  cout << n << "th fiobonacci number is " << fibo_number(n) << endl;
  return 0;
}