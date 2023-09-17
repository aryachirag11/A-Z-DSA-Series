// Introduction to recursion
#include <iostream>
using namespace std;

// Recursion : When a fucntion calls itself until a specified condtion is met
// Base condtion : is the specified condition at which the self of calling of function stops
// Recursion Tree :  a tree representation representing the recursive function call with arrowing referring to the flow of call
int cnt = 0;
void print_()
{
  if (cnt == 4) // base condtiond
    return;
  cout << "Count = " << cnt << endl;
  cnt++;
  print_(); // recursive function call
}
int main()
{
  print_();
  return 0;
}