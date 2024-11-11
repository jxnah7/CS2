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
  
bool seqSearchR(int arr[], int length, int start, int target){
  // BASE CASE
    // check if my start is at the end of array (or beyond)
  if(start >= length){
    return false;
  }
  else if(start == length-1){
    // we only have one number to check
    if(arr[start] == target){
      return true;
    }
  }
  // RECURSIVE CASE
  else{
    // check one number
    // the rest is---
    return seqSearchR(arr, length, start+1, target);
    // alternatively
    return (arr[start] == target) || seqSearchR(arr, length, start+1, target);
  }  
}