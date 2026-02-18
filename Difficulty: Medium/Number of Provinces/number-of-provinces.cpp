// User function Template for C++

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<bool> visited(V, false);
        queue<int>q;
        int count = 0;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
                while(!q.empty()){
                    int curr = q.front();
                    q.pop();
                    for(int j=0; j<V; j++){
                        if(adj[curr][j] == 1 && !visited[j]){
                            visited[j] = true;
                            q.push(j);
                        }
                    }
                }
                count++;
            }
        }
        return count;
    }
};