#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
};

void printList(Node *current);

int main(){
  Node *head = new Node();
  Node *first = new Node();
  Node *second = new Node();
  Node *tail = new Node();

  head->data = 0;
  head->next = first;
  first->data = 1;
  first->next = second;
  second->data = 2;
  second->next = tail;
  tail->data = 24;
  tail->next = nullptr;

  printList(head);

  delete head;
  delete first;
  delete second;
  delete tail;
  
  return 0;
}

void printList(Node *current){
  while(current != nullptr){  // print as long as theres a value init
    cout << current->data << " "; // print the value
    current = current->next;  // update location
  }
  cout << endl << "End of List Traversal."; // mark end of traversal
}