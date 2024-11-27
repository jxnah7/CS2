// review the following search algorithms

// Sequential search in a binary tree

bool sequentialSearch(TreeNode* root, int target) {
    if (root == nullptr) {
        return false; // Reached a null node; value not found
    }
    
    // Check current node
    if (root->val == target) {
        return true;
    }

    // Recursively search left and right subtrees
    return sequentialSearch(root->left, target) || sequentialSearch(root->right, target);
}

/*
sequential works for any list, fast if first slow if last
simple and works on alot of stuff, but slow for bigger data

for binary search, it starts in the middle, ends if middle is target
if not then it works on one side of the half
the list must be sorted however. 

*/