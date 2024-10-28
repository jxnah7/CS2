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
get back to 499,999,999th node
*/