/*
QUESTION: (MARKED 4/20 points)
We have the following array, with an unknown (for some reason) number of integer elements:

  int greatArr[???];  // array of integers of unknown size

You are given a pointer to some element in the array, 'stopPoint'. which is already declared for you.
Complete code instructions below that utilize the stopPoint pointer to add 1 and print every element of the 
array from the first element to stopPoint. For example, if stopPoint has the address of the 3rd value in
an array with values 10, 20, 30, 40, 50, 60, etc. your code should add 1 to the 1st, 2nd and 3rd values, 
so the resulting array values in this case would be 11, 21, 31.

Do not hard code any values here (except for the +1, of course)

INCORRECT ANSWER (4/20 points): 
while(int n = 0 != &stopPoint){
  cout << greatArr[n] + 1;
  n = n + 1;
}

CORRECT ANSWER: 

int* startPoint = greatArr; // Pointer to the start of the array
while (startPoint <= stopPoint) {
    *startPoint += 1;      // Add 1 to the current element
    cout << *startPoint << " "; // Print the updated value
    startPoint++;          // Move the pointer to the next element
}

*/