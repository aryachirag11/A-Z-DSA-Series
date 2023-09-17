#include <bits/stdc++.h>
using namespace std;

//extracting digits
void extract_digits(){
  int n;
  cout<<"Enter num : ";
  cin>>n;
  while(n > 0){
    int last_digit = n %10;
    cout<<last_digit<<" ";
    n /= 10;
  }
  
}

//count digits
void count_digits(){
  int n;
  cout<<"Enter num : ";
  cin>>n;
  int count = 0;
  while(n>0){
    //int digit = n % 10;
    n /= 10;
    count++;
  }
  cout<<endl<<"Number of digits :"<<count;
  
}

// reverse number
void reverse_num(){
  int n;
  int reversed_num = 0;
  cout<<"Enter num : ";
  cin>>n;
  while(n > 0){
    int last_digit = n %10;
    reversed_num = reversed_num *10 + last_digit;
    n /= 10;
  }
  cout<<endl<<"Reversed num : "<<reversed_num;
}

// check_pallindrome
void check_pallindrome(){
  int n;
  int reversed_num = 0;
  cout<<"Enter num : ";
  cin>>n;
  int original_num = n;
  while(n > 0){
    int last_digit = n %10;
    reversed_num = reversed_num *10 + last_digit;
    n /= 10;
  }
  if(reversed_num == original_num){
    cout<<endl<<original_num<<" is a pallindrome";
  }
  else{
    cout<<endl<<original_num<<" is not a pallindrome";
  }
  
  
}

// check armstrong
void check_armstrong(){
  int n;
  int sum = 0;
  cout<<"Enter num : ";
  cin>>n;
  int original_num = n;
  while(n > 0){
    int last_digit = n %10;
    sum = sum + (last_digit*last_digit*last_digit);
    n /= 10;
  }
  if(sum == original_num){
    cout<<endl<<original_num<<" is a armstrong number";
  }
  else{
    cout<<endl<<original_num<<" is not a armstrong number";
  }
}

// void all divisions
void all_devisions(){
  int n;
  cout<<"Enter the num : ";
  cin>>n; 
  for(int i = 1; i<= n; i++){
    if(n % i == 0){
      cout<<i<<endl;
    }
  } 
}
void all_devisions2(){
  int n;
  cout<<"Enter num : ";
  cin>>n;
  vector<int> divisions;
  for(int i = 1; i <= sqrt(n);i++){
    if(n%i == 0){
      divisions.push_back(i);
      if((n/i)!= i){
        divisions.push_back(n/i);
      }
    }
  }
  sort(divisions.begin(),divisions.end());
  for(auto i : divisions){
    cout<<i<<" ";
  }
  
}

// check for prime
void check_prime(){
  int n;
  cout<<"Enter n : ";
  cin>> n;
  int count = 0;
  for(int i = 0; i*i <= n;i++){
    if(n % i == 0){
      count++;
      if((n/i)!=i){
        count++;
      }
    }
  }
  if(count == 2){
    cout<<n<<" is a prime number";
  }
  else{
    cout<<n<<" is not a prime number";
  }
  
}

int main() {
  //extract_digits();
  //count_digits();
  //reverse_num();
  //check_pallindrome();
  //check_armstrong();
  //all_devisions2();
  check_prime(); 
}