/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
}*/

class Solution {
    void helper(int[] count, Node node)
    {
        if(node == null)
            return;
        if(node.left == null && node.right == null)
            count[0]++;
        helper(count, node.left);
        helper(count, node.right);
    }
    int countLeaves(Node node) {
        // Your code
        int count[] = new int[1];
        helper(count, node);
        return count[0];
    }
}