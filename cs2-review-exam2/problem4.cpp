// Dynamic Allocation
  // Describe what “new” and “delete” keywords do.
    // Show an example of usage for each of these, 
    // for example to dynamically declare and delete an integer object
      // What is returned by a statement that uses dynamic allocation 
      // to create a new object?

// a)

#include <iostream>
int main(){


  int* ptr = new int; // Dynamically allocate memory for an integer
  *ptr = 42;          // Assign a value to the allocated memory

  std::cout << "Value: " << *ptr << std::endl;  //prints 42

  delete ptr; // Deallocate the memory allocated for the integer


  return 0;
}

// b)
/*

A new statement returns a pointer to the allocated memory. 
The type of pointer returned depends on the data type specified during allocation.

ex)
  new int returns a pointer type of int*
  new double returns a pointer type of double*
  new SomeClass returns a pointer type of SomeClass*
  if the memory allocation fails, new throws a std::bad_alloc exception in C++.
*/


/*
  The new and delete keywords in C++ are used for dynamic memory management. 
  They allow programmers to allocate and deallocate memory at runtime, 
  which is particularly useful for managing memory for objects or arrays 
  whose size might not be known at compile time.
*/