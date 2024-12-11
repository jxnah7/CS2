#include <iostream>

using namespace std;

class Node{
  public:
    int data;
    Node *next;
    Node *prev;
};
void printReverseR(Node *head);

int main(){
  cout << "Im trying to make a linked list" << endl;

  Node *head = new Node();  
  Node *current;
  Node *first = new Node();
  Node *second = new Node();
  Node *third = new Node();
  Node *tail = new Node();

  head->data = 12;
  head->next = first;
  head->prev = nullptr;

  first->data = 13;
  first->next = second;
  first->prev = head;

  second->data = 14;
  second->next = third;
  second->prev = first;

  third->data = 15;
  third->next = tail;
  third->prev = second;

  tail->data = 16;
  tail->next = nullptr;
  tail->prev = third;

  current = head;
  while(current != nullptr){
    cout << current->data << " ";
    current = current->next;
  }

  cout << endl;

  current = tail;
  while(current != nullptr){
    cout << current->data << " ";
    current = current->prev;
  }

  cout << endl << endl;
  printReverseR(head);

  delete head;
  delete first;
  delete second;
  delete third;
  delete tail;
  delete current;
  
  return 0;
}

void printReverseR(Node *head){
  if (head == nullptr){
    return;
  }
  printReverseR(head->next);
  cout << head->data << " ";
}