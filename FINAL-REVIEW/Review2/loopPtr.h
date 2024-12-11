#include <iostream>
using namespace std;
// you have an array of integers
  // arr[100] = {3, 10, -8, 3(skip), 17, 0, 3(stop), 14, 9....}
  // TASK: Print all elements, However...
    // you need to skip one element, with a pointer named "skip"
    // you need to stop if you encounter a pointer address "stop"

  // define this function

void printExcept(int arr[], int length, int *skip, int *stop){
  for(int i = 0; i < length; i++){
    // if skip
    if(&arr[i] == skip){
      continue; // or i++ to get to next index
    }
    // if stop
    else if(&arr[i] == stop){
      return;
    }

    // otherwise
    else{
      cout << arr[i] << " ";
    }
  }
  cout << "we are done!" << endl;
}

// print an array of names, recursively
  // nameArr[length] = {john, gohn, vohn, bohn....}

// PART 2: modify the function so that you only print names that start with "j" 
// PART 3: stop all recursion if the name printed was "bohn"

void printNamesR(string *nameArr, int length){
  // BASE CASE
  if(length <= 0){
    return;
  }

  else if("bohn..."){return}
  // RECURSIVE CASE
    // take one step 
    // call function to do the rest
  else{
    // print the first name 
    if(....){}
    cout << *nameArr << " ";
    // call function to print the rest
    printNamesR(nameArr+1, --length); // go forward one space and start array from here, then chop off 1 from length
  }

}

//  you have a pointer to the head node of a singly linked list
    // count all of the nodes in the list that have a value greater than the head node

// list = {7, 0, 3, 10, 80, 4, 71, 8}
class Node{
  public:
    int data;
    Node *next;
};

void countGreater(Node *head){
  //  check the value of the head node

  // traverse the rest of the list
    // we are done when we hit a nullptr
  // if the value of the node we are looking at is greater than the first value
    // add one to our counter
}






// RETAKE CHALLENGE
//  you are given a pointer to a root node of a BST
//   you are also given a maximum value
// TASK: count the number of nodes in the tree below some maximum value
//CONSIDER: dont visit nodes you dont need to