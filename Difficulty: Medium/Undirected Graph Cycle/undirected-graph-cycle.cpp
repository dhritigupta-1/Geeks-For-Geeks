class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(V, false);
        for(int i=0; i<V; i++){
            if(vis[i]) continue;
            queue<pair<int, int>> q;
            q.push({i, -1});
            vis[i] = true;
            while(!q.empty()){
                auto node = q.front();
                q.pop();
                for(auto nbr : adj[node.first]){
                    if(!vis[nbr]){
                        vis[nbr] = true;
                        q.push({nbr, node.first});
                    }
                    else if(nbr != node.second) return true;
                }
            }
        }
        return false;
    }
};