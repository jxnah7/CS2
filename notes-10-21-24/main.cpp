#include <iostream>
using namespace std;

#include "DNode.h"

int main(){
  // use dynamic allocation to create a node "head"
  // use this node to link and create two other nodes
    // 4 ----> 0 -----> 20
  DNode *head;
  head = new DNode(4);  // 4 is now in the head

  head->next = new DNode; // connected node head to next one which holds 0
  head->next->next = new DNode(20); // the second node connects to the third that holds 20

  // link 4 <=== 0

  head->next->prev = head;  // access second node, if i go back it shuld be head or 4
  // link 0 <==== 20 
  head->next->next->prev = head->next;  // head->next->next means we are in the third node, ->prev if i go back i should be in = head->next which is the second node or 0;

  //  declare a new pointer tail that points to the last node in hte list
  DNode *tail = head->next->next;

  // remove node 0 from the list
    // list should be 4(head) <====> 20(tail)

    delete head->next;  // erasing the 0 and its pointers , 4(head) <====> nothing and nothing <====== 20
    head->next = tail;  // links 4 <======> 20
    tail->prev = head;

  // create a new node insrterd before the head node
    // give a value of 5
    // list should be 5(head) <=====> 4 <======> 20(tail)

    DNode *temp = new DNode(5); 
    head->prev = temp; // link 5 <===== 4
    temp->next = head; // link 5 ====> 4
    head = temp; // update head pointer
    temp = nullptr; // if you want move temp out of the way

  // create a new node and insert after the 4 node
    // give a value of 100
    // list should be 5(head) <=====> 4 <=====> 100 <=======> 20(tail)
    
  

  // define and execute a function to print the list given the head node
    // print(list(head));

  return 0;
}