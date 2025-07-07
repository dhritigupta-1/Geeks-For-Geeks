/*
// A Binary Tree node
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
*/

class Solution {
    static void helper(int[] count, Node root)
    {
        if(root == null)
            return;
        if(root.left == null && root.right == null)
            count[0] += root.data;
        helper(count, root.left);
        helper(count, root.right);
    }
    // Function to return sum of all nodes of a binary tree
    static int leafSum(Node root) {
        // Your code here
        int[] count = new int[1];
        helper(count, root);
        return count[0];
    }
}