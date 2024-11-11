#include <iostream>
using namespace std;

// define a sequential search function that is recursive

//input: array , length, starting index


bool seqSearchLoop(int arr[], int length, int start, int target){
  for (int i = start; i < length; i++){
    if (arr[i] == target){
      return false;
    }
  }
}

// BASE CASE (consider length, start index)
  //  Simplest version of this problem (we will reduce to this)

  // RECURISVE CASE
    // take one step
    // call function to do the rest