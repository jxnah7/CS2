#include <iostream>
using namespace std;

#include "Event.h";


// define a recursive function that will print out the time and location
// all events in an array of events
// if the events do not have clowns.

void printRecur(event arr[], int length){
  // base case
    // based on length
  if(length == 0){
    return;
  }
}
  // recursive case
    // call function to do the steps
    
    cout << arr[i] - 1;
    return printRecur(length -1) + printRecur(arr[i-1]);


int main(){
  // delcare a pointer variable that can hold an address of an empty integer
  int *ptrI;
  // declare a pointer that can hold the address of an event
  event *ptrE;
  // assign the integer pointer with a new integer from memory
  ptrI = new int;
  // assign the event pointer with an array of 100 event's
  ptrE = new event[100];  // error cus need defaults for everything inside event

  // assign ptrI with value of 100
  *ptrI = 100;  // dereference?
  // assign the location of event at index 50 with "the zoo"
  ptrE[50].location = "the zoo";
  // pointer to the event at index 14
  event *p42 = &ptrE[42];   // new pointer poitning to address of event pointer at index 42

  // use p42 to access location and set to circus
  p42->location = "circus"; // this arrow operation dereference and access the object location

  // increase the size of ptrE array by 10 (increase capacity to 110)

  // 1. make a copy of the pointer to the old array
  event *ptrOLD = ptrE;
  // 2. use ptrE to make larger array which is blank
  ptrE = new event[100];
  // 3. use a loop to copy each item
  for(int i = 0; i < 100; i++){
    ptrE[i] = ptrOLD[i];
  }
  // 4. delete the old one
  delete [] ptrOLD;
  // after your code you shuold have 
    // ptrE which has array of 110 event objects


// our first     
  
}