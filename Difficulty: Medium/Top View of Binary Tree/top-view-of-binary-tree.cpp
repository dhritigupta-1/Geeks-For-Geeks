/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*, int>> q;
        map<int, Node*> map;
        q.push({root, 0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int degree = q.front().second;
            q.pop();
            if(map.find(degree) == map.end()) map[degree] = curr;
            if(curr->left) q.push({curr->left, degree-1});
            if(curr->right) q.push({curr->right, degree+1});
        }
        vector<int> ans;
        for(auto it : map){
            ans.push_back(it.second->data);
        }
        return ans;
    }
};