// Linked List
  // Assume you have a linked list of strings. Write a function 
  // which will take in as input the pointer to the head node 
  // and will print all strings in the list
#include <iostream>
#include <string>

using namespace std;

class listNode{ // create class node
  public:
    string value; // takes string values
    listNode *next; // creates node pointer *next
};

void printLinkedList(listNode *head){ // void function with head node declared
  listNode *current = head; // current node starts at head
  while(current != nullptr) { // while current node is not null
    std::cout << current->value << std::endl; // print current node value
    current = current->next;  // jump to next node
  }
}