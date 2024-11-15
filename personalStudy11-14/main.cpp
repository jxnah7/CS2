#include <iostream>
using namespace std;

// create a pointer that points to a integer variables memmory address

int main(){

  int *i; 
  int num = 76;
  i = &num;

  cout << "the memory address of &num: " << &num << endl; // address of num
  cout << "the memory address of num: " << num << endl; // num value which is 76

  cout << "the memory address of &i: " << &i << endl; // pointer address
  cout << "the memory address of i: " << i << endl; // pointer points to address of num
  cout << "the memory address of *i: " << *i << endl; // pointer points to sum of num so 76

  return 0;
}