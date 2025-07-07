/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// left leaf nodes
class Solution {
  public:
    void helper(int& count, Node* root)
    {
        if(root == NULL)
            return;
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL)
            count += root->left->data;
        helper(count, root->left);
        helper(count, root->right);
    }
    int leftLeavesSum(Node *root) {
        // Code here
        int count = 0;
        helper(count, root);
        return count;
    }
};