// pointers
  // What would be the output of the following code
#include <iostream>
int main(){

  int x;                     // declare x
  int y;  // declare y;
  int *p; // declare pointer p

  p = &x; // p now points to x's address
  int *q; // declare pointer q
  q = &y; // q now points to y's address
  x = 62; // x is equal to 62, pointer p points to 62 too
  y = 38; // y is equal to 38, pointer q points to 38 too
  q = p;  // q now also points to x, which is 62
  *p = 55;  // p points to x, therefore modifying x to 55, q also is storing 55
  x = *q; // x is set to the value pointed to by q (55), but x is already 55, so there's no change


  std::cout << x << " " << y << std::endl;  // prints x and y
  std::cout << *p << " " << *q << std::endl;  // prints the location that p and q are pointing to which is ___


  return 0;
}

// x = 55
// y = 38

// *q = 55
// *p = 55