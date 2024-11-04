#include <iostream>
using namespace std;

// define a function that will print "hello" any number of times
  // input: number of times to print hello
  // output: print hello x times

void hello(int n){
  for(int i = 0; i < n; i++){
    cout << "hello ";
  }
  cout << endl;
}

// RECURSIVE FUNCTIONS
  // functions that call themselves on smaller versions of
  // problems

  // all recursive solutions have 2 parts
  //  base case == simplest version of our problem (you dont need a loop)
  //  recursive case == take one step toward the solution and call the function 
  //  to do the rest (smaller problem)

// now do it without a loop
void helloR(int n){
  // BASE CASE = simplest version (print 0 times)
  if (n <= 0){
    cout << endl;
    return;
  }
  // RECURSIVE/GENERAL CASE
  else{
    // take one step toward the solution(print hello one times)
    cout << "hello";
    // print hello the remaining number of times
    helloR(n-1);
  }
}