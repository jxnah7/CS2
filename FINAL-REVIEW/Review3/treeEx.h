// define a function that will count the number of nodes
  // in a BST

  // you are only given a pointer to the root node
  // return number of nodes in tree

class treeNode {
  public:
    int data;
    treeNode *right;
    treeNode *left;
    treeNode(int inData = 0){
      data = inData;
      left = right = nullptr;
    }
};

class Node {
  public:
    int data;
    Node *next;
};
// ALGO - how do we do this?
// 1. start at the root node
// 2. is there a node here?
  // YES - the number of nodes is 1 + all nodes on the left + all nodes on the right
  // NO - there are zero nodes in this tree


// code
int countTreeR(treeNode *root){
  // BASE CASE
  if(root == nullptr){
    return 0;
  }
  // RECURSIVE CASE
  else{
    return 1 + countTreeR(root->left) + countTreeR(root->right);
  }
}


// linked list
// head(15) (1) ====> nextThing(99)(2) =====> nextThing(7)(3)
// 1. start at the head node, start a counter at 0
// 2. check if there is a node here (current)
  // YES -- add one to my counter, and go to the next node
  // NO -- DONE, end of list. return counter
// 3. Repeat step 2 until we return something

int countLL(Node *head){
  int counter = 0;
  Node *current = head;
  while(current != nullptr){
    counter++;
    current = current->next;
  }
  return counter;
}

// ALGO - how do we do this?
// 1. start at the head Node
// 2. is there a node here?
  // YES -- the number of nodes is 1 + theRest
  // NO -- the number of nodes is 0

// do this recursively
int countLLR(Node *head){
  //BASE CASE
  if(head == nullptr){
    return 0;
  }
  //RECURSIVE CASE
  else{
    return 1 + countLLR(head->next);
  }
}
// CHALLENGE 2 - count everything below a maximum value

// ALGO - how do we do this?
// 1. start at the root node
// 2. is there a node here?
  // YES - is the value at this node < maxVal?
      // YES -- we have 1 + all on the left + all on the right
      // NO -- we dont count this one
        // we have 0 + all on the left + all on the right
  // NO - there are zero nodes in this tree


// code
int countLessThanR(treeNode *root, int maxVal){
  // BASE CASE
  if(root == nullptr){
    return 0;
  }
  // RECURSIVE CASE
  else{
    if(root->data < maxVal){
      return 1 + countLessThanR(root->left, maxVal) + countTreeR(root->right);
    }
    else{
      return 0 + countLessThanR(root->left, maxVal) + countLessThanR(root->right, maxVal);
    }
  }
}

// CHALLENGE 3 - count everything below a maximum value
  // dont visit nodes you dont need to
  `
// ALGO - how do we do this?
// 1. start at the root node
// 2. is there a node here?
  // YES - is the value at this node < maxVal?
      // YES -- we have 1 + all on the left + all on the right
      // NO -- we dont count this one
        // we have 0 + all on the left + all on the right
  // NO - there are zero nodes in this tree


// code
int countLessThanR(treeNode *root, int maxVal){
  // BASE CASE
  if(root == nullptr){
    return 0;
  }
  // RECURSIVE CASE
  else{
    if(root->data < maxVal){
      return 1 + countLessThanR(root->left, maxVal) + countTreeR(root->right);
    }
    else{
      return 0 + countLessThanR(root->left, maxVal);
    }
  }
}

// define a function that will count all nodes with an even number
  // in a BST, given a pointer to the root node

int sumEvensTreeR(treeNode *root){
  // BASE
  if(root == nullptr){
    return 0;
  }
  // RECURSIVE
  else{
    if(root->data % 2 == 0){
      return 1 + sumEvensTreeR(root->left) + sumEvensTreeR(root->right);
    }
    else{
      return 0 + sumEvensTreeR(root->left) + sumEvensTreeR(root->right);
    }
  }
}