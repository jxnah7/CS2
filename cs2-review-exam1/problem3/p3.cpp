// Functions - 3) What is the output?

#include <iostream>

using namespace std;


int FindSqr(int a) {        // Findsqr function that allows t to become the squared version of a
 int t;
 t = a * a;
 return a;      // returns a which was not edited, weird considering the function was made for t
}


int main() {
 int square;
 square = FindSqr(10);      // calling the function with 10 inside the parameters which now makes a equal to 10 
 cout << square;
 return 0;
}

// output is 10 because the function findsqr simply returns a as it was declared
// the variable t doesnt do anything in this function since we are returning a
// without redefining it or changing it in anyway

// ***** 10 is the answer ******