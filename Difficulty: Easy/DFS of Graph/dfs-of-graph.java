class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    void helper(int node, ArrayList<ArrayList<Integer>> adj, ArrayList<Integer> ans)
    {
        ans.add(node);
        ArrayList<Integer> m = adj.get(node);
        adj.set(node, new ArrayList<>());
        for(int n : m)
        {
            if(!adj.get(n).isEmpty())
                helper(n, adj, ans);
        }
    }
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {
        // Code here
        ArrayList<Integer> ans = new ArrayList<>();
        helper(0, adj, ans);
        return ans;
    }
}