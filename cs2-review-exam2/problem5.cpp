// Linked Lists

  // What are the restrictions with traversing a singly-linked list?

/*
The primary restrictions with singly-linked lists are one-way traversal 
and the inability to access or modify nodes directly by index. 
These constraints impact efficiency for operations such as backward traversal,
 arbitrary element access, and certain types of insertions or deletions.
*/

// a)
// question: For example, what happens if you are currently pointing to 
// the 500 millionth node in a list of 1 billion elements, 
// and you need to access the previous node (499,999,999th)?

/*
Go all the way back to the head pointer, then traverse til you 
get back to 499,999,999th node which is super slow!
*/

// b)
// question: Assume you have a linked list of strings. Write a function which will take in as input the
// pointer to the head node and will print all strings in the list.
#include <iostream>
#include <string>
using namespace std;

class Node1{
  public: 
    string data; 
    Node1 *next;
};

int ex(Node1 *head){
  Node1 *current = head;
  while(current != nullptr){
    cout << current->data << " ";
    current = current->next;
  }
  return 0;
}


// c)
// question: You are given an existing linked list (or a doubly linked list!). Be prepared to either
// explain (in plain language) and/or implement the following:
//  a. Insert a node anywhere in the list, b. Remove a node from the list
//  c. "Concatinate" two lists, d. "Split" a list into two lists given split point

/*
as a restriction for all of the above, you will be limited in the number of pointers you can use. For example,
you will usually have a “head”, “tail” and maybe a “current” pointer. You will not be able to use unlimited
pointers to each node, or things like head->nextnextnextnextnext…. etc. The logic of your traversal is key
here!
*/

// ANSWER: 
/*
  To insert a new node:
    1. create new node with data and pointer, using new allocation then store data
    2. set the new node to point to the spot the previous node was pointing to EX> newNode->next = prevNode->next
    3. then make sure that the previous now points to our new node EX> prevNode->next = newNode

  To remove a Node from the list:
    1. make the previous node point to the next node (skipping the current we want to delete)
    EX> first-next = second-next // since we are removing second
    2. if this is a singly linked list then go to 4.  However, if this is 
    a doubly linked list then proceed to step 3.
    3. third-prev = first; // all we did was get rid of second so now delete it!
    4. delete second // free up that memory we allocated
    
  To concatinate two Lists:
    connect last node of first list to the first node of the second list
    super simple just tail->next = head (head of second list)
    if it was a doubly list then set head-prev of second list to tail in first list

  To split a list into two (given point):
    to split we just disconnect the joinings so
    set tail-next = nullptr and then set head-prev = nullptr if it was a doubly
*/