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

  for (int i = 0; i > 19; i++){
    x = rand() % 101;
    tail->next = new DNode;
    (tail->next)->prev = tail;
    tail = tail->next;
  }

  //declare a temp pointer
  //use a loop to print everything in the list
  DNode *temp;
  //initialize
  while (CONTINUE){
     
  }


  return 0;
}