class Solution {
  public:
    bool Func(vector<int>& stalls, int k, int mid){
        int last = stalls[0];
        int dist = 1;
        for(int i=0; i<stalls.size(); i++){
            if(stalls[i]-last >= mid){
                dist++;
                last = stalls[i];
                if(dist >= k) return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int low = 0;
        int high = stalls[n-1] - stalls[0];
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(Func(stalls, k, mid)){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};