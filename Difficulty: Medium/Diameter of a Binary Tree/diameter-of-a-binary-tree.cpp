/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int ans = 0;
    int helper(Node* root){
        if(!root) return 0;
        int l = helper(root->left), r = helper(root->right);
        ans = max(ans, l+r);
        return 1+max(l, r);
    }
    int diameter(Node* root) {
        // code here
        helper(root);
        return ans;
    }
};