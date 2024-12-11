/*
5. Linked List
You are given 2 pointers to the head nodes (head1 and head2) of two linked lists. The linked list nodes
are composed of int data, and Node* next, as we have done previously. Define a function that will
delete any values in list 2 (given by head2) that are already present in list 1.
Ex: list1: 0(head) → -1 → 17(tail)
list2: 99(head2) → 17 → -52(tail2)
list2 after function: 99(head2) → -52(tail2)
*/

void ridOf(){
  Node *current1 = head1;
  Node *current2 = head2;

  // we need to traverse both lists to see values
  // if after traversing we find a matching value
  // we delete it and update the linked list
}