class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int sum = arr[0];
        int maxsum = arr[0];
        for(int i=1; i<n; i++){
            sum = max(arr[i], sum+arr[i]);
            maxsum = max(sum, maxsum);
        }
        return maxsum;
    }
};