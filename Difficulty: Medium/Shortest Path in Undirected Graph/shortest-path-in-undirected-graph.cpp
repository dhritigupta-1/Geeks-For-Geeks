class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<vector<int>> adj(V);
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> ans(V, -1);
        vector<bool> vis(V, false);
        queue<int> q;
        ans[src] = 0;
        q.push(src);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int nbr : adj[node]){
                if(ans[nbr] == -1){
                    ans[nbr] = ans[node]+1;
                    q.push(nbr);
                }
            }
        }
        return ans;
    }
};
