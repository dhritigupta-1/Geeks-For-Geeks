class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        // step 1: Build the adjancy list
        vector<pair<int,int>> adj[V];
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u, wt});
        }
        // step 2: Create min-heap using priority queue
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        pq.push({0, src}); // {distance, node}
        
        // Step 4: Dijkstra Algorithm
        while(!pq.empty()){
            pair<int, int> p = pq.top();
            pq.pop();
            int d = p.first;
            int node = p.second;
            if(d > dist[node]) continue;
            for(auto it : adj[node]){
                int nbr = it.first;
                int wt = it.second;
                if(dist[nbr] > d+wt){
                    dist[nbr] = d+wt;
                    pq.push({dist[nbr], nbr});
                }
            }
        }
        return dist;
        
    }
};