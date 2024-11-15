// pointers
  // What would be the output of the following code
#include <iostream>
int main(){

  int x;
  int y;
  int *p;

  p = &y;
  y = 832;
  x = 822;
  int *q = &x;
  x = *p;
  y = *p;
  p = q;
  *q = 833;


  std::cout << x << " " << y << std::endl;
  std::cout << *p << " " << *q << std::endl;


  return 0;
}