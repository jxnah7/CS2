// Dynamic Allocation
  // Describe what “new” and “delete” keywords do.

/*
  The new and delete keywords in C++ are used for dynamic memory management. 
  They allow programmers to allocate and deallocate memory at runtime, 
  which is particularly useful for managing memory for objects or arrays 
  whose size might not be known at compile time.
*/

// a)
// question: Show an example of usage for each of these, for example to 
// dynamically declare and delete an integer object

#include <iostream>
int main(){


  int* ptr = new int; // Dynamically allocate memory for an integer
  *ptr = 42;          // Assign a value to the allocated memory

  std::cout << "Value: " << *ptr << std::endl;  //prints 42

  delete ptr; // Deallocate the memory allocated for the integer


  return 0;
}

// b)
// question: What is returned by a statement that uses dynamic 
// allocation to create a new object?
/*

A new statement returns a pointer to the allocated memory. 
The type of pointer returned depends on the data type specified during allocation.

ex)
  new int returns a pointer type of int*
  new double returns a pointer type of double*
  new SomeClass returns a pointer type of SomeClass*
  if the memory allocation fails, new throws a std::bad_alloc exception in C++.
*/

// c)
// question: What happens if you use the same pointer identifier 
// “for example myPtr” to dynamically allocates memory for an object 
// using “new”, followed immediately
// by a statement that declares a second object using “new”?

/*
  Memory leak! Ex below
*/

int leakM(){
  int* myPtr = new int;  // First allocation
  *myPtr = 10;

  myPtr = new int;       // Second allocation, without delete
  *myPtr = 20;           // The first allocation is now inaccessible (memory leak)

  // Ideally, we would delete myPtr when done
  delete myPtr;

  return 0;
}

// d)
// question: What is a memory leak?

/*
  A memory leak is a condition in which a program continuously allocates memory 
  dynamically but fails to release or deallocate it when it is no longer needed. 
  Over time, this leads to a gradual increase in memory usage, which can degrade 
  system performance and eventually exhaust available memory, causing the 
  program (or even the entire system) to crash.
*/