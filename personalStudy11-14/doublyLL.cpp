#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
    Node *prev;
};

void printListForward(Node *current);
void printListBackwards(Node *current);

int main(){
  Node *head = new Node();
  Node *first = new Node();
  Node *second = new Node();
  Node *tail = new Node();

  head->data = 0;
  head->next = first;
  head->prev = nullptr;
  first->data = 1;
  first->next = second;
  first->prev = head;
  second->data = 2;
  second->next = tail;
  second->prev = first;
  tail->data = 24;
  tail->next = nullptr;
  tail->prev = second;

  cout << "Forward Traversal: " << endl;
  printListForward(head);

  cout << endl << "Backwards Traversal: " << endl;
  printListBackwards(tail);

  delete head;
  delete first;
  delete second;
  delete tail;
  
  return 0;
}

void printListForward(Node *current){
  while(current != nullptr){  // print as long as theres a value init
    cout << current->data << " "; // print the value
    current = current->next;  // update location
  }
  cout << endl << "End of Forward List Traversal."; // mark end of traversal
}

void printListBackwards(Node *current){
  while(current != nullptr){
    cout << current->data << " ";
    current = current->prev;
  }
  cout << endl << "End of Backwards List Traversal.";
}