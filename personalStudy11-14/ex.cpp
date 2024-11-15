#include <iostream>
using namespace std;

int main(){

  int x = 3643;
  int *ptr = &x;

  cout << ptr << '\n'; // xm y
  cout << *ptr << '\n'; //xn y
  cout << &ptr << '\n'; //xm n

  cout << '\n';

  cout << x << '\n'; //xn y 
  cout << &x << '\n'; //xm y


  return 0;
}