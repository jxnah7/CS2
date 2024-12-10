class treeNode {
  public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int inData){
      data = inData;
      left = nullptr;
      right = nullptr;
    }
};

// list - {6, 32, 4, 8, 17, 13, 26, 28, 31, 9}
int main(){

  treeNode *root = new treeNode(6);

  root->left->data = 4;
  root->right->data = 32;
  root->right->left->data = 8;
  root->right->left->right->data = 17;
  root->right->left->right->left->data = 13;
  root->right->left->right->left->left->data = 9;
  root->right->left->right->right->data = 26;
  root->right->left->right->right->right->data = 28;
  root->right->left->right->right->right->right->data = 31;

  return 0;
}