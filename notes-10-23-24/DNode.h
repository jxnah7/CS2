#include <iostream>
// linked list node connects node to the next nodes

// a ==> b ==> c

// warm up exercise
  // define a node that can connect in all four directions

  //              n
  //              |
  //              |
  //              |
  //    w-----------------e
  //              |
  //              |
  //              |
  //              s

  class fourNode {
    int data; // we need this to hold information
    fourNode *east; // address of the next node
    fourNode *west, *north, *south;
  };

  // define a node that can go back and forth in a linked list
    // a(head) <===> b <===> c <===> d(tail)
  class DNode {
    public:
      int data;
      DNode *next;
      DNode *prev;

      DNode(int inData = 0){
        data = inData;
        next = nullptr;
      }
  };