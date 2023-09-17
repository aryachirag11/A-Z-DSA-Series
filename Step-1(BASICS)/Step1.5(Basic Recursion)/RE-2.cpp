// Basic Recursion Problems

#include <iostream>
using namespace std;

// P1 -> print name N times
void printName_N_times(int i, int n)
{
  if (i > n)
    return;
  cout << "Chirag : " << i << " times" << endl;
  printName_N_times(i + 1, n);
}

// P2 -> print linearlly from 1 to N;
void print_N_times(int i, int n)
{
  if (i > n)
    return;
  cout << i << endl;
  print_N_times(i + 1, n);
}

// P3 -> print linearlly from 1 to N(using backtracking);
// we made sure that the last recursive call is been executed first
void print_N_times_2(int i, int n)
{
  if (i < 1)
    return;
  print_N_times_2(i - 1, n);
  cout << i << endl;
}

// P4 -> print linearlly from N to 1(using backtracking);
// we made sure that the last recursive call is been executed first
void print_N_times_3(int i, int n)
{
  if (i > n)
    return;
  print_N_times_3(i + 1, n);
  cout << i << endl;
}

int main()
{
  // function call for printName_N_times

  int n;
  cout << "Enter n: ";
  cin >> n;
  // printName_N_times(1, n);
  // print_N_times(1, n);
  // print_N_times_2(n, n);
  print_N_times_3(1, n);

  return 0;
}
