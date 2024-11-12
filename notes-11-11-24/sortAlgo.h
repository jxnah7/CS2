#include <iostream>
using namespace std;

// sort some numbers
// take one card from the top of the deck
// put it face up on a second pile

// 2. take the next card from the top of the deck
  // CASE 1: the card goes after the previous card
  // CASE 2: the card goes before the previous card


// 3. take the next card
  // start from the top of the sorted deck 
  // insert it wherever it goes 
  // (greater than previous but less than current card)

// we have an array of numbers (7, 10, 3, 14, 8)

// bubble sort (iteration)
// 1. start at index 0 (and index 1)
// 2. are the two numbers in order?
  // if they are, do nothing
  // if they arent then swap em
// 3. move over to next index
  // index 0,1    move to    index 1, 2
// 4. check if we are at the end of the array (second index is out of bounds)
  // YES: done (guarentee one number is sorted)
  // NO: go back to step 2

// TO SORT THE WHOLE LIST
  // do i (iteration of bubble sort)
  // repeat length-1 times

  // we go through the loop n times, n amount of times
  // therefore O(n^2)

  void printArr(int arr[], int length){

  }

  void swap(int arr[], int index1 , int index2){
    int temp = arr[index2];  // copy second numnber
    arr[index2] = arr[index1];  // copy first number onto the first index
    arr[index1] = temp; // copy the second number onto first index
  }

  void bubbleSortIteration(int arr[], int length){
    int i = 0;  // start at 0 for first index, then use i+1 for second index
    while(i+1 < length){
      if(arr[i] < arr[i+1]){}
      else{
        swap(arr, i, i+1);
      }
      i++;  // move over to the next index
    }
  }

  // this guarentees that the length number will be sorted
  void bubbleSort(int arr[], int length){
    // repeat iteration length-1  times
    cout << "original array: ";
    printArr(arr, length);
    for(int i - 0; i < length; i++){
      bubbleSortIteration(arr, length);
      cout << "after " << i << " iterations: ";
      printArr(arr, length);
    }
  }