class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> ans(arr.size(), 0);
        int count = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] >= 1 && arr[i] <= arr.size()) 
                ans[arr[i] - 1] ++;
        }
        return ans;
    }
};
