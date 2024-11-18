/*
QUESTION: You have a stack array with capacity to hold Message object elements. You also have a counter
to keep track of the number of Message objects in the stack numItems. Complete the following for a push()
method that will add a Message to the stack when the stack is full.

  1. Explain the steps needed to achieve this correctly in plain language
  2. implement your steps from above in code

ANSWER(MARKED 0/20 points):

to create a stack include the library, stack <string> myStack inside a function, also include string
library for good practice when using strings, counter will be an integer. stack name is numItems not myStack. 
Assuming the message is a string.
#include <iostream>
#include <string>

int main(){

stack<string>numItems[Message]; // creates a stack, data type of string, named numItems thats an array with size of Message
int counter = Message

numItems.push(Message);


return 0;
}

CORRECT ANSWER BELOW: 
*/
#include <iostream>
using namespace std;

class Stack{
public:
  int *arr; //pointer to array 
  int numItems; // number of items
  int capacity; // size of array
  
  Stack(int initialCap){
    arr = new int(initialCap);
    numItems = 0;
    capacity = initialCap;
  }

  void print(){
    if (numItems == 0){
      cout << "array is empty" << endl;
      return;
    }
    for(int i = 0; i < numItems; i++){
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void push(int value){
    if(numItems == capacity){
      cout << "array is full";
      return;
    }
  }

  arr[numItems] = value;
  numItems++;

};