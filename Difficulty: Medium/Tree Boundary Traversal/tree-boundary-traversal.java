/*
class Node
{
    int data;
    Node left, right;

    public Node(int d)
    {
        data = d;
        left = right = null;
    }
}
*/

class Solution {
    boolean isLeaf(Node root) {
        return (root.left == null && root.right == null);
    }

    void left(List<Integer> ans, Node root) {
        if (root == null || isLeaf(root)) return;
        ans.add(root.data);
        if (root.left != null)
            left(ans, root.left);
        else
            left(ans, root.right);
    }

    void right(List<Integer> ans, Node root) {
        if (root == null || isLeaf(root)) return;
        if (root.right != null)
            right(ans, root.right);
        else
            right(ans, root.left);
        ans.add(root.data); 
    }

    void helper(List<Integer> ans, Node root) {
        if (root == null) return;
        if (isLeaf(root)) {
            ans.add(root.data);
            return;
        }
        helper(ans, root.left);
        helper(ans, root.right);
    }

    ArrayList<Integer> boundaryTraversal(Node node) {
        ArrayList<Integer> ans = new ArrayList<>();
        if (node == null) return ans;

        if (!isLeaf(node)) ans.add(node.data); 

        left(ans, node.left); 
        helper(ans, node);         
        right(ans, node.right);   

        return ans;
    }
}
