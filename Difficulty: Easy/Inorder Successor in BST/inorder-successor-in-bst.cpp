/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void inorder(Node* root, vector<int>& ans){
        if(!root) return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    int inOrderSuccessor(Node *root, Node *x) {
        // Your code here
        vector<int> ans;
        inorder(root, ans);
        int i = 0;
        while(i < ans.size()){
            if(ans[i] == x->data && i+1<ans.size()) return ans[i+1];
            i++;
        }
        return -1;
    }
};