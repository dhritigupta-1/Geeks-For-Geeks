class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> ans(2);
        int mi = INT_MAX;
        int ma = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            mi = min(mi, arr[i]);
            ma = max(ma, arr[i]);
        }
        ans[0] = mi;
        ans[1] = ma;
        return ans;
    }
};