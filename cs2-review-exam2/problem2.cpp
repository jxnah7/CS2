// What would be the output of the following code?
#include <iostream>

int main(){

  int a[5] = {1, 1, 2, 3, 4 };  // array with length of 5, storing 5 integers
  int k = 3;  // k = 3
  int *p; // declare new pointer p
  p = a + 1;  // p points to second element in array

  std::cout << a[k] << std::endl; // prints the 3rd element starting from 0 so 3
  std::cout << *(a + k) << std::endl; // *(a+k) is same as a[k], since pointer arithmetic shifts a by k elements. So 3
  std::cout << *a << std::endl; // *a is the value at the address of the first element in a, which is a[0], So 1
  std::cout << a[*a] << std::endl;  // *a is a[0], which is 1. a[*a] is therefore a[1]. Element 1 is 1
  std::cout << a[*a + 2] << std::endl;  // *a is a[0], which is 1 so 1 + 2. So element 3 is 3
  std::cout << *p << std::endl;   // p is set to a + 1, which means p points to a[1], element 1 is 1
  std::cout << p[0] << std::endl; // p still points to element 1 so 1
  std::cout << p[1] << std::endl; // p points to a[1] so [1 + 1] is a[2] so 2 
  std::cout << *(p + 1) << std::endl; // same as p[1] which is same as a[1 + 1] so a[2] which is 2
  std::cout << *p + 1 << std::endl; // *p is 1(since *p is a[1]) so 1+1 = a[2] so 2


  return 0;
}