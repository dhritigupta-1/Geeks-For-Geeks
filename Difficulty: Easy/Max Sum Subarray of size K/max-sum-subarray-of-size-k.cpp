class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> map;
        map[0] = 1;
        int sum = 0, j = 0, maxsum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(i-j+1 == k){
                maxsum = max(maxsum, sum);
                sum -= arr[j]; j++;
            }
        }
        return maxsum;
    }
};