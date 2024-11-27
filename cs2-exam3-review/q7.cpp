#include <iostream>
using namespace std;

class treeNode{
  public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int inData = 0){
      data = inData;
      left = right = nullptr;
    }
};

// list {9, 7, 4, 3, 8, 10}

int main(){

  treeNode *root = new treeNode(9);
  root->left = new treeNode(7);
  root->left->left = new treeNode(4);
  root->left->left->left = new treeNode(3);
  // root->left->left->left->right = new treeNode(8); wrong because this is bigger than 4
  root->left->right = new treeNode(8);
  root->right = new treeNode(10);
  
  return 0;
}

// height is from bottom to top starting from 0
// level is from top to bottom
/*
        A (Level 0)
       / \
      B   C (Level 1)
     / \
    D   E (Level 2)

*/

// a has height of 2
// d has height of 0
// c has height of 0

// to find the right value inside the tree
bool findVal(treeNode *root, int target){
  if(root == nullptr){
    return false;
  }
  if(root->data == target){
    return true;
  }
  else if(target < root->data){
    return findVal(root->left, target);
  }
  else{
    return findVal(root->right, target);
  }
}