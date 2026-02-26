// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> ans(V, 1e8);
        ans[src] = 0;
        for(int i=0; i<V; i++){
            for(auto edge : edges){
                int u = edge[0];
                int v = edge[1];
                int wt = edge[2];
                if(ans[u]!=1e8 && ans[u]+wt<ans[v]){
                    if(i == V-1) return {-1};
                    ans[v] = ans[u]+wt;
                }
            }
        }
        return ans;
    }
};
