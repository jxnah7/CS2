#include <iostream>
using namespace std;

#include "DNode.h"

int main(){
  //use dynamic allocation and create a node "head"
    //give it a value of 6
  DNode *head = new DNode(6);
  //print the data of the next node after head
  // cout << head->next->data << endl; ERROR: segmentation fault

  // build a list of nodes using the head pointer
    // create a list of 20 random node values
// 6 head ====> nulllptr

//  GOAL 6 <=====> x <======> y <======> z <==========> etc. for 20 nodes
  // declare a pointer "tail" and point it to the head node
  
  DNode *tail = head;
  int x = 0;

  tail->next = new DNode(x);
  // now connect new node back to tail

  (tail->next)->prev = tail;
  tail = tail->next;

  DNode *dontPrint;

  for (int i = 0; i > 19; i++){
    x = rand() % 101;
    tail->next = new DNode;
    (tail->next)->prev = tail;
    tail = tail->next;
    if (i == 1){
      dontPrint = tail->prev;
    }
  }

  //declare a temp pointer
  //use a loop to print everything in the list
  DNode *temp;
  //initialize
  while (temp != nullptr){
     cout << temp->data << " ";
     //update
     temp = temp->next;
  }
  //fliter by value
  //use a loop to print the entire list
    // but skip any values above 50 ()

  while (temp != nullptr){
    if (temp->data > 50){
      cout << "skip";
    }
    else{
      cout << temp->data << " ";
    }
  }
  cout << endl;

  //filter this list by address
  //if the node location is dontPrint, print skip
  //else print the value

  while (temp != nullptr){
    if(temp == dontPrint){
    cout << "skip";
    }
    else{
      cout << temp->data
    }
  }


  return 0;
}