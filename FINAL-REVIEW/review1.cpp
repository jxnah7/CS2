#include <iostream>
using namespace std;

#include "Event.h";

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

  
}