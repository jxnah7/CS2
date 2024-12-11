/*
2. Recursion
You are given a pointer to the head node of a linked list, head. The linked list nodes are composed of
int data, and Node* next, as we have done previously. Define a function that will recursively print the
contents of the list in reverse.
*/

void printReverse(Node *head){
  if(head == nullptr){
    return;
  }
  printReverse(head->next)
  cout << head->data << " ";
}