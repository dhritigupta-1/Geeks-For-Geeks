class Solution {
    // Function to return Breadth First Search Traversal of given graph.
    public ArrayList<Integer> bfs(ArrayList<ArrayList<Integer>> adj) {
        // code here
        ArrayList<Integer> ans = new ArrayList<>();
        Queue<Integer> q = new LinkedList<>();
        boolean[] visited = new boolean[adj.size()];
        q.add(0);
        visited[0] = true;
        while(q.size() > 0)
        {
            int curr = q.poll();
            ans.add(curr);
            ArrayList<Integer> n = adj.get(curr);
            for(int i=0; i<n.size(); i++)
            {
                int m = n.get(i);
                if(!visited[m])
                {
                    visited[m] = true;
                    q.add(m);
                }
            }
        }
        return ans;
    }
}