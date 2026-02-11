class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> map;
        map[0] = 1;
        int sum = 0, count = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == k) count = i + 1;
            if(map.find(sum - k) != map.end()) count = max(count, i - map[sum - k]);
            if(map.find(sum) == map.end()) map[sum] = i;
        }
        return count;
    }
};