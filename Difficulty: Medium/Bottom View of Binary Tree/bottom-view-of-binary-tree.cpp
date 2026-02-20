/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> ans;
        if(!root) return ans;
        queue<pair<Node*, int>> q;
        map<int, Node*> map;
        q.push({root, 0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int degree = q.front().second;
            q.pop();
            map[degree] = curr;
            if(curr->left) q.push({curr->left, degree-1});
            if(curr->right) q.push({curr->right, degree+1});
        }
        for(auto it : map){
            ans.push_back(it.second->data);
        }
        return ans;
    }
};