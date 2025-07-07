/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    void helper(int& ans, Node* root)
    {
        if(root == NULL)
            return;
        ans += root->data;
        helper(ans, root->left);
        helper(ans, root->right);
    }
    int sumBT(Node* root) {
        // code here
        int ans = 0;
        helper(ans, root);
        return ans;
    }
};